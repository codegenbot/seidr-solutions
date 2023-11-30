vector<int> get_odd_collatz(int n){
    vector<int> collatz;
    collatz.push_back(n);
    while(n != 1){
        if(n % 2 == 0){
            n = n / 2;
        }else{
            n = (3 * n) + 1;
        }
        collatz.push_back(n);
    }
    vector<int> odd_collatz;
    for(int i = 0; i < collatz.size(); i++){
        if(collatz[i] % 2 != 0){
            odd_collatz.push_back(collatz[i]);
        }
    }
    sort(odd_collatz.begin(), odd_collatz.end());
    return odd_collatz;
}