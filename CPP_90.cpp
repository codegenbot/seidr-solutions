Here is the solution:

int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1; // or any other value that represents "None"
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for (auto it = sorted.begin(); ++it != sorted.end(); ) {
        if (*it > lst[0]) {
            return *prev(it);
        }
    }
    return -1; // or any other value that represents "None"
}