```cpp
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