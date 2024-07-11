vector<int> make_a_pile(int n){
    vector<int> stones;
    for (int i = 0; i < n; i++){
        stones.push_back(n + i * ((n % 2 == 0) ? 2 : 1));
    }
    return stones;
}