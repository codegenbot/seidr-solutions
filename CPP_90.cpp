Here is the completed function:

int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // Return None (or in this case, -1)
    sort(lst.begin(), lst.end());
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] > lst[0]) {
            return lst[i];
        }
    }
    return -1;
}