int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // Return None or -1 for simplicity
    sort(lst.begin(), lst.end());
    int smallest = *next(lst.begin(), 1);
    int second_smallest = *prev(rbegin(lst), 1, rbegin(lst));
    return second_smallest;
}