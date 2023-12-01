bool is_sorted(vector<int> lst){
    vector<int> sorted_lst = lst;
    sort(sorted_lst.begin(), sorted_lst.end());

    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] != sorted_lst[i]) {
            return false;
        }
    }

    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] == lst[i-1]) {
            return false;
        }
    }

    return true;
}