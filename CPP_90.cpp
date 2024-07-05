int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // Using -1 to represent None

    sort(lst.begin(), lst.end());
    int first_smallest = lst[0];

    for (int i = 1; i < lst.size(); ++i) {
        if (lst[i] > first_smallest) {
            return lst[i];
        }
    }

    return -1; // No 2nd smallest element found
}