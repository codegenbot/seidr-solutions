vector<int> make_a_pile(int n){
    vector<int> levels;
    int stones = n;
    levels.push_back(stones);

    for(int i = 0; i < n-1; i++){
        if(stones % 2 == 0){
            stones += 2;
        }else{
            stones += 1;
        }
        levels.push_back(stones);
    }
    return levels;
}