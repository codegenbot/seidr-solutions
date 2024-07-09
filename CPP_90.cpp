int next_smallest(vector<int> lst) {
    if (lst.size() < 2)
        return -1; // or any other value that represents None
    vector<int> unique_lst = lst;
    sort(unique_lst.begin(), unique_lst.end());
    for (int i = 0; i < unique_lst.size() - 1; i++) {
        if (unique_lst[i] != unique_lst[i + 1])
            return unique_lst[i + 1];
    }
    return -1; // or any other value that represents None
}