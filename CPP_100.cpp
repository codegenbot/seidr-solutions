vector<int> make_a_pile(int n){
    vector<int> stones;
    int num_stones = n;
    for(int i=0; i<n; i++){
        stones.push_back(num_stones);
        if(n % 2 == 0){
            num_stones += 2;
        } else {
            num_stones += 1;
        }
    }
    return stones;
}