```
int next_smallest(vector<int> lst) {
    if (lst.size() < 2)
        return -1; 
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] != sorted[i+1])
            return sorted[i+1];
    }
    cout << "Error: The input list must have at least two unique elements." << endl;
    return -1; 
}