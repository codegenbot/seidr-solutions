Here is the completed code:

int next_smallest(vector<int> lst) {
    vector<int> copy = lst;
    if (copy.size() < 2) return -1; // Return None
    sort(copy.begin(), copy.end());
    auto it = prev(cend(copy), cend(copy));
    return *it;
}