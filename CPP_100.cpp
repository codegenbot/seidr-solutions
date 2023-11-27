vector<int> make_a_pile(int n){
    vector<int> stones;
    int count = n;
    for(int i=0; i<n; i++){
        stones.push_back(count);
        count += (n%2 == 0) ? 2 : 1;
    }
    return stones;
}