Here is the completed code:

int next_smallest(vector<int> lst) {
    vector<int> copy = lst;
    sort(copy.begin(), copy.end());
    if (copy.size() < 2) return -1; // None
    return copy[1];
}