vector<int> make_a_pile(int n){
    vector<int> stones;
    int curr_stones = n;
    stones.push_back(curr_stones);
    for(int i = 1; i < n; i++){
        if(curr_stones % 2 == 0){
            curr_stones += 2;
        } else {
            curr_stones += 1;
        }
        stones.push_back(curr_stones);
    }
    return stones;
}