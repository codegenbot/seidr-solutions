vector<int> make_a_pile(int n){
    vector<int> pile;
    int current = n;
    for(int i = 0; i < n; ++i) {
        pile.push_back(current);
        if (n % 2 == 0) {
            current += 2;
        } else {
            current += 2;
        }
    }
    return pile;
}