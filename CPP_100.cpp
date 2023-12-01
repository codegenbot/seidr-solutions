vector<int> make_a_pile(int n){
    vector<int> piles;
    int numOfStones = n;
    for(int i = 0; i < n; i++){
        piles.push_back(numOfStones);
        if(numOfStones % 2 == 0){
            numOfStones += 2;
        } else {
            numOfStones += 1;
        }
    }
    return piles;
}