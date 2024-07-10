int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // or any other value that represents None in your case.
    auto it = std::next(std::min_element(lst.begin(), lst.end()));
    return *(it == lst.end() ? prev(it) : it);
}