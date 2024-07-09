Here is the completed code:

vector<int> next_smallest(vector<int> lst) {
    if (lst.size() < 2) return vector<int>();
    auto it = std::next(std::min_element(lst.begin(), lst.end()));
    return (*it == *std::prev(it, 1)) ? vector<int>() : vector<int>({*it});
}