int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // or any other value that you consider as None

    auto it = std::next(std::min_element(lst.begin(), lst.end()));
    while (*it == *std::min_element(lst.begin(), it)) {
        ++it;
    }
    return *it;
}