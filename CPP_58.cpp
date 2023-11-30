vector<int> common(vector<int> l1, vector<int> l2) {
    vector<int> result;
    
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    
    for (int i = 0, j = 0; i < l1.size() && j < l2.size();) {
        if (l1[i] < l2[j]) {
            i++;
        } else if (l1[i] > l2[j]) {
            j++;
        } else {
            result.push_back(l1[i]);
            i++;
            j++;
        }
    }
    
    result.erase(unique(result.begin(), result.end()), result.end());
    
    return result;
}