vector<int> make_a_pile(int n){
    vector<int> piles;
    int stones = n;
    for(int i = 0; i < n; i++){
        piles.push_back(stones);
        if(n % 2 == 0){
            stones += 2;
        } else {
            stones += 1;
        }
    }
    return piles;
}