vector<int> make_a_pile(int n){
    vector<int> stones;
    for(int i = 0; i < n; ++i){
        stones.push_back(n + i * (i % 2 == n % 2 ? 1 : 2));
    }
    return stones;
}