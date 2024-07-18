vector<int> count_up_to(int n) {
    vector<int> result(n - 1);
    iota(result.begin(), result.end(), 2);
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}