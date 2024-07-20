int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // Return None or -1 as per your requirement
    vector<int> copy = lst;
    sort(copy.begin(), copy.end());
    int target = copy[1];
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] == target) return -1; // Return None or -1 as per your requirement
    }
    return target;
}