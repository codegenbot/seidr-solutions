#include <algorithm>

vector<float> sort_even(vector<float> l) {
    vector<float> result(l.size());
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            // For even indices, copy the value from original array
            result[i] = l[i];
        } else {
            // For odd indices, keep the values as they are
            result[i] = l[i];
        }
    }
    // Sort the even-indexed elements
    sort(result.begin() + 1, result.end());
    return result;
}