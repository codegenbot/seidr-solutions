#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    pair<vector<int>, vector<int>> res;
    
    for (int i = 1; i <= n/2; i++) {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j < i; j++) {
            sum1 += v[j];
        }
        for (int j = i; j < n; j++) {
            sum2 += v[j];
        }
        
        if (sum1 == sum2) {
            res.first = vector<int>(v.begin(), v.begin() + i);
            res.second = vector<int>(v.begin() + i, v.end());
            return res;
        } else {
            int diff = abs(sum1 - sum2);
            for (int j = i; j < n-i; j++) {
                sum1 -= v[j];
                sum2 += v[n-j-1];
                if (abs(sum1 - sum2) < diff) {
                    res.first = vector<int>(v.begin(), v.begin() + j+1);
                    res.second = vector<int>(v.begin() + j+1, v.end());
                    return res;
                }
            }
        }
    }
    
    res.first = v;
    res.second = vector<int>();
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    pair<vector<int>, vector<int>> res = cutVector(v);
    cout << "First subvector: ";
    for (int i : res.first) {
        cout << i << " ";
    }
    cout << endl;
    cout << "Second subvector: ";
    for (int i : res.second) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}