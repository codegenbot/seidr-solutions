vector<int> maximum(vector<int> arr, int k) {
    vector<int> res;
    unordered_set<int> unique;
    
    for (int i : arr) {
        if (unique.find(i) == unique.end()) {
            res.push_back(i);
            unique.insert(i);
        }
        
        if (res.size() >= k)
            break;
    }
    
    return vector<int>(res.begin(), res.begin() + k); // Return the first 'k' elements
}