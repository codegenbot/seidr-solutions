Here is the completed code:

vector<int> make_a_pile(int n) {
    vector<int> result;
    int stones = n;
    for (int i = 1; ; i++) {
        if (stones > 0) {
            result.push_back(stones);
            stones = (i % 2 == 0 ? i + 1 : i - 1);
        } else {
            break;
        }
    }
    return result;
}