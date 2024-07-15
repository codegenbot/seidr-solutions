bool issame(vector<int> a, vector<int> b) {
    return a == b;
}
// Declare incr_list function
vector<int> incr_list(vector<int> l) {
    for (int i = 0; i < l.size(); ++i) {
        l[i]++;
    }
    return l;
}