vector<int> make_a_pile(int n){
    vector<int> stones;
    int num_stones = n;
    stones.push_back(num_stones);
    
    for(int i = 1; i < n; i++){
        if(num_stones % 2 == 0){
            num_stones += 2;
        } else {
            num_stones += 1;
        }
        stones.push_back(num_stones);
    }
    
    return stones;
}