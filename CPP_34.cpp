```cpp
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
    std::vector<int> uniqueVec(vec.begin(), it);
    return issame(uniqueVec, {vec[0], vec.back()});
}

int originalMain(){
    assert(findUnique({0, 2, 3, 5, 9, 123}) == 1);
    std::cout << findUnique({5, 3, 5, 2, 3, 3, 9, 0, 123}) << std::endl;
    return 0;
}

int main(){
    originalMain();
    return 0;
}