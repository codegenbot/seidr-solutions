vector<int> make_a_pile(int n){
    vector<int> stones;
    int level = n;
    int stonesInLevel = n;
    stones.push_back(stonesInLevel);
    
    while(level > 1){
        if(level % 2 == 0){
            stonesInLevel += 2;
        } else {
            stonesInLevel += 1;
        }
        stones.push_back(stonesInLevel);
        level--;
    }
    
    return stones;
}