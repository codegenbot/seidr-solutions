vector<int> make_a_pile(int n) {
    vector<int> pile;
    int num = 1;
    for (int i = 0; i < n; i++) {
        if ((num - 1) % 2 == 0) { // even number
            pile.push_back(num);
            num += 2;
        } else { // odd number
            pile.push_back(num);
            num += 2;
            num++;
        }
    }
    return pile;
}