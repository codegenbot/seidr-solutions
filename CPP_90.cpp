int next_smallest(vector<int> lst){
    if (lst.size() < 2) return -1; // Assuming -1 as equivalent to None

    sort(lst.begin(), lst.end());
    for (size_t i = 1; i < lst.size(); ++i) {
        if (lst[i] != lst[i - 1]) {
            return lst[i];
        }
    }

    return -1; // No second smallest element exists
}