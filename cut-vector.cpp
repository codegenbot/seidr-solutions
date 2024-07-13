#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res;
    
    long long min_diff = LLONG_MAX;
    for (int i = 1; i < n; i++) {
        long long sum1 = 0, sum2 = 0;
        for (int j = 0; j < i; j++) {
            sum1 += v[j];
        }
        for (int j = i; j < n; j++) {
            sum2 += v[j];
        }
        
        long long diff = abs(sum1 - v[i]);
        if (abs(sum1 - sum2) <= min_diff || i == 0) {
            min_diff = abs(sum1 - sum2);
            res.push_back(vector<int>(v.begin(), v.begin() + i));
            res.push_back(vector<int>(v.begin() + i, v.end()));
            return res;
        }
    }
    
    vector<int> left = v;
    vector<int> right = v;
    res.push_back(left);
    res.push_back(right); // default case
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    vector<vector<int>> result = cutVector(v);
    cout << "[";
    for (int i = 0; i < result[1].size(); i++) {
        cout << result[1][i] << " ";
    }
    cout << "]" << endl;
    cout << "[";
    for (int i = 0; i < result[0].size(); i++) {
        cout << result[0][i] << " ";
    }
    cout << "]" << endl;
    
    return 0;
}