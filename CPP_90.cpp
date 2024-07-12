int next_smallest(const std::vector<int>& lst) {
    if (lst.size() < 2 || lst[0] == lst[1]) {
        return -1;
    }
    std::vector<int> sorted_lst = lst;
    std::sort(sorted_lst.begin(), sorted_lst.end());
    return sorted_lst[1];
}