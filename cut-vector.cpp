#include <iostream>
#include <vector>
#include <limits>

using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    
    if (n == 1)
        return {{vec[0]}}, {};

    for (int i = 1; i < n; ++i) {
        int left_sum = 0, right_sum = 0;
        
        for (int j = 0; j < i; ++j)
            left_sum += vec[j+1];
        
        for (int j = i; j < n; ++j)
            right_sum += vec[j+1];
        
        if (left_sum == right_sum) {
            return {vector<int>(vec.begin(), vec.begin() + i + 1)}, vector<int>(vec.begin() + i + 1, vec.end());
        }
        
        int diff = abs(left_sum - right_sum);
        
        if (diff < numeric_limits<int>::max()) {
            int prev_diff = diff;
            diff = left_sum - right_sum;
            
            if (left_sum <= right_sum) {
                if (prev_diff > diff)
                    return {vector<int>(vec.begin(), vec.begin() + i + 1)}, vector<int>(vec.begin() + i + 1, vec.end());
            } else {
                if (diff < prev_diff)
                    return {vector<int>(vec.begin(), vec.begin() + i + 1)}, vector<int>(vec.begin() + i + 1, vec.end());
            }
        }
    }
    
    return {{vec[0]}}, vector<int>(vec.begin() + 1, vec.end());
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n+2);
    for (int i = 1; i <= n + 1; ++i)
        cin >> vec[i];
    
    pair<vector<int>, vector<int>> res = cutVector(vector<int>(vec.begin() + 1, vec.end()));
    
    cout << "[";
    for (int num : res.first) {
        cout << num;
        if (&num != &res.first.back())
            cout << " ";
    }
    cout << "] [";

    for (int num : res.second) {
        cout << num;
        if (&num != &res.second.back())
            cout << " ";
    }
    
    cout << "]" << endl;
    
    return 0;
}