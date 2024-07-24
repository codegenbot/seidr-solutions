#include <vector>
using namespace std;

vector<int> cutVector(vector<int> v) {
    int n = v.size();
    vector<int> res[2];
    
    if (n == 1) {
        res[0] = v;
        return res;
    }
    
    for (int i = 0; i < n - 1; i++) {
        int sumLeft = 0, sumRight = 0;
        
        for (int j = 0; j <= i; j++)
            sumLeft += v[j];
        for (int j = i + 1; j < n; j++)
            sumRight += v[j];
        
        if (sumLeft == sumRight) {
            res[0] = vector<int>(v.begin(), v.begin() + i + 1);
            res[1] = vector<int>(v.begin() + i, v.end());
            return res;
        }
    }
    
    int minDiff = INT_MAX, idx = -1;
    for (int i = 0; i < n - 1; i++) {
        int sumLeft = 0, sumRight = 0;
        
        for (int j = 0; j <= i; j++)
            sumLeft += v[j];
        for (int j = i + 1; j < n; j++)
            sumRight += v[j];
        
        int diff = abs(sumLeft - sumRight);
        if (diff < minDiff) {
            minDiff = diff;
            idx = i;
        }
    }
    
    res[0] = vector<int>(v.begin(), v.begin() + idx + 1);
    res[1] = vector<int>(v.begin() + idx, v.end());
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    
    for (auto& x : v) {
        cin >> x;
    }
    
    auto result = cutVector(v);
    cout << "[";
    for (const auto& x : result[0]) {
        cout << x << " ";
    }
    cout << "]\n[";
    for (const auto& x : result[1]) {
        cout << x << " ";
    }
    cout << "] 0\n";
    
    return 0;
}