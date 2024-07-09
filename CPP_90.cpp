Here is the solution:

int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // None in C++ equivalent to Python's None
    vector<int> copy = lst;
    sort(copy.begin(), copy.end());
    for (int i = 1; i < copy.size(); i++) {
        if (copy[i] != copy[0]) {
            return copy[i];
        }
    }
    return -1; // None in C++ equivalent to Python's None
}