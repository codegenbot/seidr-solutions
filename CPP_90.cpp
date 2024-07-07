Here is the completed code:

int next_smallest(vector<int> lst) {
    vector<int> sorted_lst = lst;
    sort(sorted_lst.begin(), sorted_lst.end());
    if (sorted_lst.size() < 2) return -1; // or any other value that represents None
    return *(next(sorted_lst.begin(), sorted_lst.end()) - 1);
}