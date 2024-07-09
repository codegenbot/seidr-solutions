#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

void sort_even(std::vector<float>& l) {
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) continue;
        l[i] = l[i - 1];
    }
    sort(l.begin(), l.end());
}

bool issame(std::vector<float> v1, std::vector<float> v2) {
    return v1 == v2;
}

int main() {
    std::vector<float> v1 = {1.1, 2.2, 3.3, 4.4};
    std::vector<float> v2 = {1.1, 2.2, 3.3, 4.4};

    sort_even(v1);
    assert(issame(v1, v2));

    return 0;
}