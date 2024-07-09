vector<int> make_a_pile(int n) {
    vector<int> result;
    int numStones = 1;
    for (int i = 0; i < n; i++) {
        if ((numStones & 1) == 0) { // even number
            result.push_back(numStones + 2);
        } else { // odd number
            result.push_back(numStones + 1);
        }
        numStones += (numStones % 2 ? 1 : 2);
    }
    return result;
}