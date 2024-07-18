#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> sort_third(std::vector<int> l) {
    for (int i = 0; i < l.size(); ++i) {
        if ((i + 1) % 3 == 0) {
            std::vector<int> temp;
            for (int j = i - 2; j <= i; ++j) {
                temp.push_back(l[j]);
            }
            std::sort(temp.begin(), temp.end());
            for (int j = i - 2, k = 0; j <= i; ++j, ++k) {
                l[j] = temp[k];
            }
        }
    }
    return l;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
    return 0;
}