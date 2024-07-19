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
    
    for (int i = 0; i < n; i++) { 
        if(i > 0) {
            long long diff = std::abs(v[i] - ((sum1 - prev_sum) / (i + 1)));
            
            if (diff < min_diff) {
                min_diff = diff;
                index = i; // update the cutting point
            } else if (diff == 0) {
                int sum1_end = 0;
                for(int j = 0; j <= i; j++) {
                    sum1_end += v[j];
                }
                if(sum1 - prev_sum == sum1_end) {
                    res[0].assign(v.begin(), v.begin() + i+1);
                    res[1].assign(v.begin() + i, v.end());
                    return res;
                }
            }
        }
        
        sum1 += v[i];
        prev_sum = sum1; 
    }
    
    if (min_diff == 0) {
        res[0].assign(v.begin(), v.begin() + index+1);
        res[1].assign(v.begin() + index, v.end());
    } else {
        res[0].assign(v.begin(), v.begin() + index+1);
        res[1].assign(v.begin() + index, v.end());
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