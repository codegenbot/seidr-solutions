Here is the completed code:

vector<int> make_a_pile(int n) {
    vector<int> result;
    int numStones = n;

    for (int i = 0; i < n; ++i) {
        if (numStones % 2 == 1)
            result.push_back(numStones);
        else
            result.push_back(numStones + 1);

        numStones += ((numStones % 2) ? 2 : 1);
    }

    return result;
}