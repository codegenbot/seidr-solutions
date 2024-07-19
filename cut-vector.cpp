#include <climits>
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    
    long long sum1 = accumulate(v.begin(), v.end(), 0LL); 
    long long prev_sum = v[0]; 
    long long min_diff = LLONG_MAX;
    int index = -1;
    
    for (int i = 1; i < n; i++) { 
        long long left_sum = prev_sum;
        long long right_sum = sum1 - left_sum;
        
        long long diff = std::abs(left_sum - right_sum);
        
        if (diff < min_diff) {
            min_diff = diff;
            index = i; // update the cutting point
        } else if (diff == 0) {
            res[0].assign(v.begin(), v.begin() + i+1);
            res[1].assign(v.begin() + i, v.end());
            return res;
        }
        
        prev_sum += v[i];
    }
    
    res[0].assign(v.begin(), v.begin() + index+1);
    res[1].assign(v.begin() + index, v.end());
    
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<vector<int>> res = cutVector(v);
    for (auto &v : res) {
        for (int x : v) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}