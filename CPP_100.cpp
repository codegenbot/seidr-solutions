vector<int> make_a_pile(int n){
    vector<int> stones;
    stones.push_back(n);
    int current = n;
    for(int i=1; i<n; i++){
        if(current % 2 == 0){
            current += 2;
        } else {
            current += 1;
        }
        stones.push_back(current);
    }
    return stones;
}