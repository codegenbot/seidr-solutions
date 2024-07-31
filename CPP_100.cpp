Here is the completed code:

vector<int> make_a_pile(int n) {
    vector<int> result;
    int current = 1;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            result.push_back(current);
            current += 2;
        } else {
            result.push_back(current);
            current += 1;
        }
    }
    return result;
}