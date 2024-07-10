Here is the completed code:

int next_smallest(vector<int> lst) {
    vector<int> copy = lst;
    if (copy.size() < 2) return -1; // or any other value that represents None
    sort(copy.begin(), copy.end());
    for (int i = 1; i < copy.size(); i++) {
        if (copy[i] != copy[0]) return copy[i];
    }
    return -1; // or any other value that represents None
}