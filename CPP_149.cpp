#include <algorithm>
#include <string>
#include <vector>

#include <initializer_list>

namespace std {

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        throw runtime_error("Vectors are not the same size");
    }
    for (int i = 0; i < a.size(); i++) {
        vector<string> temp = {a[i], b[i]};
        sort(temp.begin(), temp.end());
        if (temp[0] != temp[1]) {
            throw runtime_error("Vectors are not the same");
        }
    }
    return true;
}

vector<string> sorted_list_sum(vector<string> v) {
    sort(v.begin(), v.end());
    return v;
}
}