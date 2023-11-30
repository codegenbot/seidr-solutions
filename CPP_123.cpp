vector<int> get_odd_collatz(int n){
    vector<int> collatz_seq;
    collatz_seq.push_back(n);
    
    while(n > 1){
        if(n % 2 == 0){
            n = n / 2;
        }
        else{
            n = (3 * n) + 1;
        }
        collatz_seq.push_back(n);
    }
    
    vector<int> odd_numbers;
    for(int i = 0; i < collatz_seq.size(); i++){
        if(collatz_seq[i] % 2 != 0){
            odd_numbers.push_back(collatz_seq[i]);
        }
    }
    
    sort(odd_numbers.begin(), odd_numbers.end());
    
    return odd_numbers;
}