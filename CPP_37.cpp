#include <algorithm>

bool issame(vector<float> a, vector<float> b);

vector<float> sort_even(vector<float> l) {
    vector<float> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            vector<float> even;
            for (int j = 0; j < l.size(); j++) {
                if (j % 2 == 0) {
                    even.push_back(l[j]);
                }
            }
            sort(even.begin(), even.end());
            result.push_back(even[0]);
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}