#include <vector>
#include <algorithm>

bool issame(std::std::vector<int> a, std::std::vector<int> b) {
    return a == b;
}

std::std::vector<int> sort_third(std::std::vector<int> l) {
    std::std::vector<int> l_copy = l;
    for (int i = 0; i < l.size(); ++i) {
        if ((i + 1) % 3 == 0) {
            std::sort(l_copy.begin() + i - 2, l_copy.begin() + i + 1);
        }
    }
    return l_copy;
}