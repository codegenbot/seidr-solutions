int next_smallest(vector<int> lst) {
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    int target = 1;
    for(int i = 0; i < sorted.size(); i++) {
        if(sorted[i] > target) {
            return (i == 0)? None : sorted[i-1];
        }
        target++;
    }
    return None;
}