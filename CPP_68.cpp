#include <vector>

bool issame(vector<int> v1, vector<int> v2) {
    return v1.empty() && v2.empty();
}

bool isSubsequence(vector<int>& s, vector<int>& t) {
    int i = 0;
    for (int n : t) {
        for (int m : s) {
            if (m == n) {
                i++;
                break;
            }
        }
        if (!s.empty() && i < s.size()) return false;
    }
    return i == s.size();
}

vector<int> pluck(vector<int> arr) {
    if (arr.empty()) return {};

    int minEven = INT_MAX;
    int index = 0;

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            index = i;
        }
    }

    return {(int)minEven, index};
}