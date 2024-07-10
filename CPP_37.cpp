#include <algorithm>

vector<float> sort_even(vector<float> l) {
    vector<float> result(l.size());
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            // even indices: sort the values and put them in result
            auto it = std::stable_partition(l.begin() + i, l.end(), [](float x) { return x <= l[i]; });
            int j = 0;
            for (; it != l.end(); ++it, ++j) {
                result[2*i+j] = *it;
            }
        } else {
            // odd indices: just copy the values
            result[2*i-1] = l[i];
        }
    }
    return result;
}