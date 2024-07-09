Here is the completed code:

vector<int> next_smallest(vector<int> lst) {
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    
    if (sorted.size() < 2)
        return vector<int>();
        
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] != sorted[i+1])
            return vector<int> {sorted[i+1]};
    }
    return vector<int>{};