int next_smallest(vector<int> lst) {
    if (lst.size() < 2)
        return -1; // or return None as per the problem statement
    vector<int> sorted_lst = lst;
    sort(sorted_lst.begin(), sorted_lst.end());
    auto it = unique(sorted_lst.begin(), sorted_lst.end());
    sorted_lst.erase(it, sorted_lst.end());

    if (sorted_lst.size() < 2)
        return -1; // or return None as per the problem statement

    return *next(cbegin(sorted_lst), cend(sorted_lst));
}