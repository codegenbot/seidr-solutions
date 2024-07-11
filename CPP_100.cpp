vector<int> make_a_pile(int n){
    vector<int> stones;
    int stones_in_level = n;

    for(int i=0; i<n; i++){
        stones.push_back(stones_in_level);
        if(stones_in_level % 2 == 0){
            stones_in_level += 1;
        }
        else{
            stones_in_level += 2;
        }
    }

    return stones;
}