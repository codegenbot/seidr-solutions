#include <algorithm>

vector<float> sort_even(vector<float> l) {
    vector<float> result(l.size());
    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 1) { // odd index
            result[i] = l[i];
        } else { // even index
            vector<float> evens;
            for (int j = 0; j < l.size(); ++j) {
                if (j % 2 == 0 && i != j) {
                    evens.push_back(l[j]);
                }
            }
            sort(evens.begin(), evens.end());
            result[i] = evens[0];
        }
    }
    return result;
}