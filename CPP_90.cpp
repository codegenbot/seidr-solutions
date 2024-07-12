Here is the completed code:

int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1; // Return None in C++ (None doesn't exist)
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    auto it = prev(distance(sorted.begin(), find(sorted.begin(), sorted.end(), *min_element(sorted.begin(), sorted.end()))));
    if (it != sorted.end()) return *it;
    else return -1; // Return None in C++ (None doesn't exist)
}