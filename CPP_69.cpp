```cpp
int search(const std::vector<int>& lst) {
    std::map<int, bool> countMap;
    for (auto i : lst) {
        if (countMap[i]) return i; 
        countMap[i] = true; 
    }
    return -1; 
}