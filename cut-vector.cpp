#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    int minDiff = INT_MAX;
    int idx = -1;
    
    for (int i = 0; i < n; i++) {
        int sumLeft = 0, sumRight = 0;
        
        for (int j = 0; j <= i; j++) {
            sumLeft += v[j];
        }
        
        for (int j = i + 1; j < n; j++) {
            sumRight += v[j];
        }
        
        int diff = abs(sumLeft - sumRight);
        
        if (diff < minDiff) {
            minDiff = diff;
            idx = i;
        }
    }
    
    res[0] = vector<int>(v.begin(), v.begin() + idx + 1);
    res[1] = vector<int>(v.begin() + idx + 1, v.end());
    
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    auto result = cutVector(v);
    cout << "First subvector: ";
    for (auto x : result[0]) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Second subvector: ";
    for (auto x : result[1]) {
        cout << x << " ";
    }
    return 0;
}