#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<float>b) {
    return a == b;
}

vector<float> sort_even(vector<float> l) {
    vector<float> result(l.size());
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            vector<float> evenVals;
            for (float val : l) {
                if (val % 2.0 == 0.0) {
                    evenVals.push_back(val);
                }
            }
            sort(evenVals.begin(), evenVals.end());
            result[i] = evenVals[0];
        } else {
            result[i] = l[i];
        }
    }
    return result;
}