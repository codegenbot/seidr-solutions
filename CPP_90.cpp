int next_smallest(vector<int> lst){
    if (lst.size() < 2) {
        return -1;
    }
    sort(lst.begin(), lst.end());
    int min_val = lst[0];
    for (int i = 1; i < lst.size(); ++i) {
        if (lst[i] > min_val) {
            return lst[i];
        }
    }
    return -1;
}