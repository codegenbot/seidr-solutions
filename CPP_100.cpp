vector<int> make_a_pile(int n){
    vector<int> pile;
    int stones = n;
    pile.push_back(stones);
    
    for(int i=1; i<n; i++){
        if(n%2 == 0){ // if n is even
            stones += 2;
        } else { // if n is odd
            stones += 1;
        }
        pile.push_back(stones);
    }
    
    return pile;
}