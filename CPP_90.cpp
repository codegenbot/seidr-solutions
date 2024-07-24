#include <vector>
int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1; // Return None
    vector<int> copy = lst;
    sort(copy.begin(), copy.end());
    int first = *copy.begin();
    for (int i : copy) {
        if (i != first)
            return i;
    }
    return -1; // Return None
}