int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1; // or any other value that represents "None"
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for (int i = 1; i < sorted.size(); i++) {
        if (sorted[i] != sorted[0]) {
            int result = std::find_if(lst.begin(), lst.end(),
                [val](int x) { return x == sorted[i]; })->second;
            return result;
        }
    }
    return -1; // or any other value that represents "None"
}