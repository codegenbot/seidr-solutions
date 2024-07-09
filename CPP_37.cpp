```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<float> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(abs(a[i] - b[i]) > 1e-5) return false;
    }
    return true;
}

int main() {
    vector<float> l = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    vector<float> result(l.size());
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            vector<float> evenVals;
            for (int j = 0; j < l.size(); j++) {
                if (j % 2 == 0) {
                    evenVals.push_back(stof(std::to_string(l[j])));
                }
            }
            sort(evenVals.begin(), evenVals.end());
            result[i] = evenVals[0];
        } else {
            result[i] = l[i];
        }
    }
    assert(issame({-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}, result));
    return 0;
}