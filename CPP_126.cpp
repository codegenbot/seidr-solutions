bool is_sorted(vector<int> lst) {
    for (int i = 0; i < lst.size() - 1; i++) {
        if (lst[i] >= lst[i + 1]) {
            return false;
        }
    }
    vector<int> unique(lst.begin(), unique_copy(lst.end()));
    return unique.size() == 1 || (unique.size() > 1 && is_sorted(unique));
}

vector<int> unique_copy(vector<int>::iterator start, vector<int>::iterator end) {
    vector<int> result;
    for (auto it = start; it != end; ++it) {
        if (std::find_if(result.begin(), result.end(),
                         [&it](const int &val) { return val == *it; }) == result.end())
            result.push_back(*it);
    }
    return result;
}