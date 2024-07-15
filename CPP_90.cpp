int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // or return None as per problem description
    sort(lst.begin(), lst.end());
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] != lst[0]) return lst[i];
    }
    return -1; // or return None as per problem description
}