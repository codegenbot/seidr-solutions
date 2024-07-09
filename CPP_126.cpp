vector<int> unique_lst = lst;
    sort(unique_lst.begin(), unique_lst.end());
    for (int i = 0; i < unique_lst.size(); i++) {
        if (count(lst.begin(), lst.end(), unique_lst[i]) > 1) {
            return false;
        }
    }
    return lst == unique_lst;
}