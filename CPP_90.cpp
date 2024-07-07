Here is the completed code:

int next_smallest(vector<int> lst){
    if (lst.size() < 2) {
        return -1; // or any other value that represents None
    }
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    auto it = upper_bound(sorted.begin(), sorted.end(), sorted[0]);
    if (it != sorted.end()) {
        return *it;
    } else {
        return -1; // or any other value that represents None
    }
}