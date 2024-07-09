bool is_same(vector<int> a, vector<int> b) {
    vector<int> a_sorted = a;
    sort(a_sorted.begin(), a_sorted.end());
    vector<int> b_sorted = b;
    sort(b_sorted.begin(), b_sorted.end());
    
    return a_sorted == b_sorted;
}