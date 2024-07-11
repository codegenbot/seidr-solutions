vector<int> unique_lst(lst.begin(), lst.end());
    sort(unique_lst.begin(), unique_lst.end());
    if (unique_lst.size() != lst.size()) {
        return false;
    }
    for (int i = 1; i < unique_lst.size(); i++) {
        if (unique_lst[i] == unique_lst[i - 1]) {
            return false;
        }
    }
    return true;
}