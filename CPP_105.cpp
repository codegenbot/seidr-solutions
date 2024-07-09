#include <string>

vector<string> by_length(vector<int> arr) {
    vector<int> v;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            v.push_back(i);
        }
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    vector<string> res;
    for (int i : v) {
        res.push_back(to_string(i));
    }
    return res;
}