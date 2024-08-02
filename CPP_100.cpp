vector<int> make_a_pile(int n) {
    vector<int> result;
    int count = 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            result.push_back(count);
            count += 2;
        } else {
            result.push_back(count);
            count += 1;
        }
    }
    return result;
}