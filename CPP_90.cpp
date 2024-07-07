int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1; // or any other value that represents "None"
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    int count = 0, result = 0;
    for(int i = 0; i < sorted.size(); i++) {
        if(count == 1) {
            return sorted[i];
        }
        if(sorted[i] != result) {
            count++;
            result = sorted[i];
        }
    }
    return -1; // or any other value that represents "None"
}