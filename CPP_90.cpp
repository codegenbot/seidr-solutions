Here is the completed code:

int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // or any value that represents "None"
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for (auto it = sorted.begin(); it != prev(sorted.end()); ++it) {
        if (*it != *(prev(it))) {
            return *it;
        }
    }
    return -1; // or any value that represents "None"
}