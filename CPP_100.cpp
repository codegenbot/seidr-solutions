Here is the completed code:

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int level = 1;
    for (int i = 1; ; i++) {
        if ((n % 2 == 0 && i % 2 == 0) || (n % 2 != 0 && i % 2 != 0)) {
            pile.push_back(i);
            n--;
            level++;
        }
        if (n == 0) break;
    }
    return pile;
}