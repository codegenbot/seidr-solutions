int next_smallest(vector<int> lst) {
    if(lst.size() < 2) return -1; // Return None in Python terms
    vector<int> sorted_lst = lst;
    sort(sorted_lst.begin(), sorted_lst.end());
    for(int i = 0; i < sorted_lst.size() - 1; i++) {
        if(sorted_lst[i] != sorted_lst[i+1]) {
            return sorted_lst[i+1];
        }
    }
    return -1; // Return None in Python terms
}