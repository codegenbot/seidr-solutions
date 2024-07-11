// Find the next smallest element in a vector of integers.
int next_smallest(vector<int> lst) {
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    if (sorted.size() < 2) {
        cout << "Error: The list must contain at least two elements." << endl;
        return -1; 
    }
    for (int i = 0; i < sorted.size()-1; i++) {
        if (sorted[i] != sorted[i+1]) {
            return sorted[i+1];
        }
    }
    cout << "Error: The list is already sorted." << endl;
    return -1; 
}