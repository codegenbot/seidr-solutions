#include <vector>
#include <iostream>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    pair<vector<int>, vector<int>> result;
    
    for (int i = 0; i < v.size() - 1; i++) {
        int left_sum = 0, right_sum = 0;
        
        for (int j = 0; j <= i; j++)
            left_sum += v[j];
        for (int j = i + 1; j < v.size(); j++)
            right_sum += v[j];
        
        if (left_sum == right_sum) {
            result.first = vector<int>(v.begin(), v.begin() + i + 1);
            result.second = vector<int>(v.begin() + i, v.end());
            return result;
        } else if (abs(left_sum - right_sum) < min_diff) {
            min_diff = abs(left_sum - right_sum);
            result.first = vector<int>(v.begin(), v.begin() + i + 1);
            result.second = vector<int>(v.begin() + i, v.end());
        }
    }
    
    return result;
}

pair<vector<int>, vector<int>> res = cutVector(v);
cout << "[";
for (int i = 0; i < res.first.size(); i++) {
    if (i > 0)
        cout << ", ";
    cout << res.first[i];
}
cout << "], [";
for (int i = 0; i < res.second.size(); i++) {
    if (i > 0)
        cout << ", ";
    cout << res.second[i];
}
cout << "]" << endl;
return 0;