#include <vector>
#include <algorithm>
#include <cassert>

vector<float> sort_even(vector<float> l);

vector<float> sort_even(vector<float> l) {
    vector<float> sorted_l;
    for(int i = 0; i < l.size(); i += 2) {
        sorted_l.push_back(l[i]);
    }
    sort(sorted_l.begin(), sorted_l.end());
    return sorted_l;
}

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

int main() {
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    return 0;
}