int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1; // or any other value that indicates "None"
    vector<int> copy = lst;
    sort(copy.begin(), copy.end());
    int res = -1;
    for(int i = 0; i < copy.size() - 1; i++) {
        if (copy[i] != copy[i+1]) {
            res = copy[i+1];
            break;
        }
    }
    return res;
}