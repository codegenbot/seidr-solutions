int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1; // None in C++ would be 0 or negative value
    vector<int> unique;
    for (int i : lst) {
        bool flag = false;
        for (int j : unique) {
            if (i == j) {
                flag = true;
                break;
            }
        }
        if (!flag) {
            unique.push_back(i);
        }
    }
    if (unique.size() < 2) return -1; // None in C++ would be 0 or negative value
    sort(unique.begin(), unique.end());
    return unique[1];
}