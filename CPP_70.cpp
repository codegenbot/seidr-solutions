```cpp
std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    while (!lst.empty()) {
        auto min_iter = std::min_element(lst.begin(), lst.end());
        result.push_back(*min_iter);
        lst.erase(min_iter);

        if (!lst.empty()) {
            auto max_iter = std::max_element(lst.begin(), lst.end());
            result.push_back(*max_iter);
            lst.erase(max_iter);
        }
    }
    return result;
}