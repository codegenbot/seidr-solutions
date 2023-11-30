vector<int> make_a_pile(int n){
    vector<int> stones;
    int numStones = n;
    stones.push_back(numStones);
    for(int i=1; i<n; i++){
        if(numStones % 2 == 0){
            numStones += 2;
        } else {
            numStones += 1;
        }
        stones.push_back(numStones);
    }
    return stones;
}