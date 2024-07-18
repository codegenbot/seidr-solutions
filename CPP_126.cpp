vector<int> sorted_lst = lst;
    sort(sorted_lst.begin(), sorted_lst.end());
    for (int i = 0; i < lst.size(); i++){
        if (lst[i] != sorted_lst[i] || count(lst.begin(), lst.end(), lst[i]) > 1)
            return false;
    }
    return true;
}