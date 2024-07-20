Here is the completed code:

int next_smallest(vector<int> lst) {
    vector<int> sorted = lst; 
    sort(sorted.begin(), sorted.end()); 
    if (sorted.size() < 2) return -1;
    for (int i = 1; i < sorted.size(); i++) {
        if (sorted[i] != sorted[0]) {
            return sorted[i];
        }
    }
    return -1;
}