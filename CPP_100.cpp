vector<int> make_a_pile(int n) {
    vector<int> pile(n);
    for (int i = 0; i < n; i++) {
        pile[i] = ((n + i) % 2 == 1) ? (i * 2 + 3) : (i * 2);
    }
    return pile;
}