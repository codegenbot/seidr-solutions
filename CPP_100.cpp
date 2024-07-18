vector<int> make_a_pile(int n){
    vector<int> pile;
    int stones = n;
    for (int i = 0; i < n; i++){
        pile.push_back(stones);
        stones = (n % 2 == 0) ? stones + 2 : stones + 1;
    }
    return pile;
}