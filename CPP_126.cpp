bool is_sorted(vector<int> lst){
    if (lst.empty()) return true;

    for (size_t i = 1; i < lst.size(); ++i) {
        if (lst[i] < lst[i - 1]) return false;
    }

    int count = 1;
    for (size_t i = 1; i < lst.size(); ++i) {
        if (lst[i] == lst[i - 1]) {
            ++count;
            if (count > 2) return false;
        } else {
            count = 1;
        }
    }
    
    return true;
}