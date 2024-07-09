bool is_sorted(vector<int> lst) {
    for (int i = 0; i < lst.size() - 1; i++) {
        if (lst[i] >= lst[i + 1]) return false;
    }
    vector<int> unique(lst.begin(), unique_copy(lst.end()));
    return unique.size() == lst.size();
}

vector<int> unique_copy(vector<int>::iterator start, vector<int>::iterator end) {
    vector<int> result;
    for (auto it = start; it != end; ++it) {
        if (std::find_if(result.begin(), result.end(),
            [x = *it](const int &y) { return y == x; }) == result.end())
            result.push_back(*it);
    }
    return result;
}