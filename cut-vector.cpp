#include <climits>
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    
    long long sum1 = 0;
    long long prev_sum = 0; 
    long long min_diff = LLONG_MAX;
    int index = -1;
    vector<int> min_indices;

    for (int i = 0; i < n; i++) { 
        if(i > 0) {
            long long left_sum = sum1;
            long long right_sum = accumulate(v.begin() + i, v.end(), 0);
            
            long long diff = std::abs(left_sum - right_sum);
            
            if (diff < min_diff) {
                min_diff = diff;
                index = i; 
                min_indices.clear();
                min_indices.push_back(i);
            } else if (diff == min_diff) {
                min_indices.push_back(i);
            }
        }
        
        sum1 += v[i];
    }
    
    if(min_diff > 0) {
        res[0].assign(v.begin(), v.begin() + index+1);
        res[1].assign(v.begin() + index + 1, v.end());
    } else {
        res[0].assign(v.begin(), v.end()); 
        res[1].assign({});
    }
    
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