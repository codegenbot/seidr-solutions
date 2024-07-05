bool is_sorted(vector<int> lst){
    if (lst.empty()) return true;
    for (size_t i = 1; i < lst.size(); ++i) {
        if (lst[i] < lst[i - 1]) return false;
    }
    for (size_t i = 1; i < lst.size(); ++i) {
        if (lst[i] == lst[i - 1]) {
            if (i + 1 < lst.size() && lst[i] == lst[i + 1]) return false;
        }
    }
    return true;
}