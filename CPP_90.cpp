Here is the completed code:

int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1; // None in python equivalent
    vector<int> sorted_lst = lst;
    sort(sorted_lst.begin(), sorted_lst.end());
    int count = 0;
    for(int i = 1; i < sorted_lst.size(); i++) {
        if(sorted_lst[i] != sorted_lst[0]) {
            return sorted_lst[i];
        }
    }
    return -1; // None in python equivalent
}