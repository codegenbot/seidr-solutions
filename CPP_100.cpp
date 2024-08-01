vector<int> make_a_pile(int n) {
    vector<int> result;
    for (int i = 1; ; i++) {
        if ((n & 1) == 0) { // check if n is even
            result.push_back(i * 2);
        } else {
            result.push_back(i * 2 - 1);
        }
        if (i >= n) break;
    }
    return result;
}