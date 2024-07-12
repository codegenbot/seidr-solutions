```cpp
bool issame(std::vector<std::int32_t> a, std::vector<std::int32_t> b) {
    return a == b;
}

std::vector<std::int32_t> strange_sort_list(std::vector<std::int32_t> lst) {
    std::vector<std::int32_t> result;
    while (!lst.empty()) {
        int min_val = *std::min_element(lst.begin(), lst.end());
        int max_val = *std::max_element(lst.begin(), lst.end());
        if (min_val < max_val) {
            result.push_back(min_val);
            lst.erase(std::remove(lst.begin(), lst.end(), min_val), lst.end());
        } else {
            result.push_back(max_val);
            lst.erase(std::remove(lst.begin(), lst.end(), max_val), lst.end());
        }
    }
    return result;
}