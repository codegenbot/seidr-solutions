Here is the completed code:

vector<int> make_a_pile(int n) {
    vector<int> result;
    int numStones = 1;
    for (int i = 0; i < n; i++) {
        if ((numStones % 2) == 0) {
            result.push_back(numStones + 1);
        } else {
            result.push_back(numStones + 2);
        }
        numStones += (numStones % 2 ? 2 : 1);
    }
    return result;
}