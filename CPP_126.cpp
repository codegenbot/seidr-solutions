Here is the completed code:

bool is_sorted(vector<int> lst) {
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] <= lst[i - 1]) {
            return false;
        }
    }
    vector<int> unique(lst.begin(), unique_elements(lst.end()));
    return unique.size() == lst.size();
}

vector<int> unique_elements(vector<int>::iterator start, vector<int>::iterator end) {
    vector<int> result;
    for (auto it = start; it != end; ++it) {
        if (std::find_if(result.begin(), result.end(), [&](int x) { return x == *it; }) == result.end()) {
            result.push_back(*it);
        }
    }
    return result;
}