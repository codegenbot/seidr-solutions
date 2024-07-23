#include <string>
bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> by_length(vector<int> arr) {
    vector<string> numArr;
    for (int i : arr) {
        if (i >= 1 && i <= 9)
            numArr.push_back(to_string(i));
    }
    sort(numArr.begin(), numArr.end());
    reverse(numArr.begin(), numArr.end());
    return numArr;
}