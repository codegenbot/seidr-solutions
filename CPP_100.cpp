vector<int> make_a_pile(int n){
    vector<int> stones;
    int count = n;
    for(int i=0; i<n; i++){
        stones.push_back(count);
        if(n % 2 == 0){
            count += 2;
        }
        else{
            count += 1;
        }
    }
    return stones;
}