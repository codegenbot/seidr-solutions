vector<int> make_a_pile(int n) {
    vector<int> result;
    int i = 1;
    while (i <= n) {
        if (i % 2 == 0) {
            result.push_back(i + 1);
        } else {
            result.push_back(i);
        }
        i += 2;
    }
    return result;
}