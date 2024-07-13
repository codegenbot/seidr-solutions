Here is the completed code:

int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1; // Return None or -1 for empty vector
    sort(lst.begin(), lst.end());
    auto it = prev(lst.begin()); // Get the previous element in sorted order
    if (it != lst.begin()) { // Check if there is a 2nd smallest element
        return *it;
    }
    return -1; // Return None or -1 for vector with one unique element
}