vector<int> make_a_pile(int n) {
    vector<int> result;
    for(int i = 0; i < n; ++i) {
        if (n % 2 == 0) {
            result.push_back(n + i * 2);
        } else {
            result.push_back(n + i * 2 + 1);
        }
    }
    return result;
}