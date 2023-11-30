vector<int> make_a_pile(int n){
    vector<int> pile;
    pile.push_back(n);
    int stones = n;
    for(int i=1; i<n; i++){
        if(n % 2 == 0){
            stones += 2;
        } else {
            stones += 1;
        }
        pile.push_back(stones);
    }
    return pile;
}