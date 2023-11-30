vector<int> make_a_pile(int n){
    vector<int> stones;
    int level = n;
    for(int i = 0; i < n; i++){
        stones.push_back(level);
        if(n % 2 == 0){
            level += 2;
        }
        else{
            level += 1;
        }
    }
    return stones;
}