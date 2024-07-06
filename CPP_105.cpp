```
#include <vector>
#include <algorithm>
#include <string>

bool issame(vector<string> a,vector<string>b) {
    return a == b;
}

vector<vector<string>> by_length(vector<int> arr) {
    vector<string> temp;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            temp.push_back(to_string(i));
        }
    }
    sort(temp.begin(), temp.end());
    reverse(temp.begin(), temp.end());
    vector<vector<string>> result;
    for (int i = 0; i < temp.size(); i += 3) {
        if (i + 2 >= temp.size()) {
            result.push_back({temp[i]});
        } else {
            result.push_back({temp[i], temp[i+1], temp[i+2]});
        }
    }
    return result;
}