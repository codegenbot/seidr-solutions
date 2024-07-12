#include <vector>
#include <algorithm>
#include <assert.h>

bool issame(vector<float> a,vector<float>b){
    return (a == b);
}

vector<float> sort_even(vector<float> l) {
    vector<float> result(l.size());
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            vector<float> evenVals;
            for (int j = 0; j < l.size(); j++) {
                if (j % 2 == 0) {
                    evenVals.push_back(l[j]);
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

int main() {
    assert (issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}) , {-12, 8, 2, 4, 5, 11, 12, 23, -10}));
    return 0;
}