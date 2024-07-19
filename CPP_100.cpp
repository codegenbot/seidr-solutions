vector<int> make_a_pile(int n){
    vector<int> stones;
    for(int i = 0; i < n; ++i){
        stones.push_back(n + i*2);
        n = n % 2 == 0 ? n + 1 : n + 2;
    }
    return stones;
}