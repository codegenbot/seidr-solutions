bool is_sorted(vector<int> lst){
    vector<int> sorted_lst = lst;
    sort(sorted_lst.begin(), sorted_lst.end());

    if (sorted_lst.size() != lst.size()) {
        return false;
    }

    for (int i = 0; i < sorted_lst.size(); i++) {
        if (sorted_lst[i] != lst[i]) {
            return false;
        }
    }

    return true;
}