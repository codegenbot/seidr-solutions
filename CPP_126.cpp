bool is_sorted(vector<int> lst) {
    for(int i = 0; i < lst.size() - 1; i++) {
        if(lst[i] >= lst[i + 1]) return false;
    }
    auto last = unique(lst.begin(), lst.end());
    return std::all_of(lst.begin(), last, [&](int x) {return std::count(lst.begin(), last, x) == 1;});
}