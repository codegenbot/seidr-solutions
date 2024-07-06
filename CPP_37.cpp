#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float>b) {
    if(a.size()!=b.size()) return false;
    for(int i=0; i<a.size(); ++i) {
        if(abs(a[i]) != abs(b[i])) return false;
    }
    return true;
}

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> result(l.size());
    int j = 0;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            auto it = min_element(l.begin(), l.end());
            result[i] = *it;
            l.erase(it);
        } else {
            result[i] = l[i];
            j++;
        }
    }
    return result;
}

int main() {
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    return 0;
}