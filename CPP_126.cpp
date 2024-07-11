vector<int> unique_lst = lst;
    sort(unique_lst.begin(), unique_lst.end());
    for (int i = 0; i < unique_lst.size() - 1; i++) {
        if (unique_lst[i] == unique_lst[i + 1]) {
            return false;
        }
    }
    return lst == unique_lst;
}