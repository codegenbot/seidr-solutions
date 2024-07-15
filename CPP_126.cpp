vector<int> unique_lst = lst;
    sort(unique_lst.begin(), unique_lst.end());
    unique_lst.erase(unique(unique_lst.begin(), unique_lst.end()), unique_lst.end());
    if (lst.size() != unique_lst.size()) {
        return false;
    }
    return is_sorted(lst.begin(), lst.end());
}