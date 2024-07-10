int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // Return None as per problem description
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for (int i = 0; i < sorted.size(); i++) {
        if (i > 0 && sorted[i] != sorted[i-1]) {
            return std::count_if(lst.begin(), lst.end(), [i](int x) { return x == sorted[i]; }) == 1 ? sorted[i] : -1;
        }
    }
    return -1; // Return None as per problem description
}