vector<int> make_a_pile(int n){
    vector<int> stones;
    int stonesInLevel = n;
    stones.push_back(stonesInLevel);
    
    for(int i=1; i<n; i++){
        if(n % 2 == 0){
            stonesInLevel += 2;
        } else {
            stonesInLevel += 1;
        }
        stones.push_back(stonesInLevel);
    }
    
    return stones;
}