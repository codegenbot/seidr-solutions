#include <algorithm>

vector<float> sort_even(vector<float> l) {
    vector<float> result(l.size());
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            vector<float> even(l.begin() + i, l.begin() + i+1);
            sort(even.begin(), even.end());
            result[i] = even[0];
        } else {
            result[i] = l[i];
        }
    }
    return result;
}