vector<int> make_a_pile(int n){
    vector<int> levels;
    levels.push_back(n);
    int stones = n;
    for(int i = 1; i < n; i++){
        if(n % 2 == 0){
            stones += 2;
        } else {
            stones += 1;
        }
        levels.push_back(stones);
    }
    return levels;
}