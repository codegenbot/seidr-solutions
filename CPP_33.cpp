#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a , std::vector<int> b) {
    return a == b;
}

std::vector<int> sort_third(std::vector<int> l) {
    std::vector<int> res = l;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            std::sort(res.begin() + i, res.begin() + i + 3);
        }
    }
    return res;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
    
    return 0;
}