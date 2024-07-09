```
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int findUnique(std::vector<int> vec) {
    std::sort(vec.begin(), vec.end());
    auto it = vec.begin();
    while (it != vec.end()) {
        auto nextIt = it + 1;
        while (nextIt != vec.end() && *it == *nextIt) {
            ++nextIt;
        }
        it = nextIt;
    }
    return issame({*vec.begin(), *(vec.end()-1)}, vec);
}

assert(issame(uniqueVec, {0, 2, 3, 5, 9, 123}));