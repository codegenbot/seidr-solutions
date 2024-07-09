int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1; // Return None or equivalent in C++
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    int second_smallest = -1;
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] != sorted[i + 1]) {
            second_smallest = sorted[i + 1];
            break;
        }
    }
    return second_smallest;
}