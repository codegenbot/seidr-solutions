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

int main() {
    std::vector<int> uniqueVec = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    if (!findUnique(uniqueVec)) {
        return 1;
    }
    return 0;
}