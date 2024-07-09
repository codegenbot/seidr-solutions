Here is the completed code:

vector<int> make_a_pile(int n) {
    vector<int> pile(n);
    for (int i = 0; i < n; i++) {
        pile[i] = (n % 2 == 1 ? i * 2 + 1 : i * 2 + 2);
    }
    return pile;
}