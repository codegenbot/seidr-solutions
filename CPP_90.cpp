int next_smallest(vector<int>& lst) {
    if (lst.empty()) {
        return -1;
    }
    
    sort(lst.begin(), lst.end());
    int count = 0;
    int prev = lst[0];
    
    for (int num : lst) {
        if (num != prev) {
            count++;
            if (count == 2) {
                return num;
            }
            prev = num;
        }
    }
    
    return -1;
}