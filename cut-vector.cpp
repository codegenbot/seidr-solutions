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
        }
    }
    
    int min_diff = INT_MAX, cut_index = 0;
    for (int i = 1; i <= n/2; i++) {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j < i; j++) {
            sum1 += v[j];
        }
        for (int j = i; j < n; j++) {
            sum2 += v[j];
        }
        
        if (abs(sum1 - sum2) < min_diff) {
            min_diff = abs(sum1 - sum2);
            cut_index = i;
        }
    }
    
    res.first = vector<int>(v.begin(), v.begin() + cut_index);
    res.second = vector<int>(v.begin() + cut_index, v.end());
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
    for (int x : res.first) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Second subvector: ";
    for (int x : res.second) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}