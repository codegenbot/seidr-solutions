int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1; // Return None or -1 as per your requirement
    vector<int> vec = lst;
    sort(vec.begin(), vec.end());
    for (int i = 0; i < vec.size() - 1; i++) {
        if (vec[i] != vec[i + 1]) {
            return vec[i + 1];
        }
    }
    return -1; // Return None or -1 as per your requirement
}