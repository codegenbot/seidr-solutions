Here is the completed code:

int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // Return None
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    int res = sorted[1];
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] == res) {
            if (i >= 2) return res;
            if (i == 1) continue;
            else return sorted[1]; // Return the next smallest
        }
    }
    return -1; // Return None
}