Here is the solution:

int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // or any other value that represents "None"
    auto it = unique(lst.begin(), lst.end());
    if (it == lst.begin()) return -1; // or any other value that represents "None"
    return *(prev(it));
}