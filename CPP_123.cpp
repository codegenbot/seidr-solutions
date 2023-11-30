vector<int> get_odd_collatz(int n){
    vector<int> collatzSeq;
    
    while(n != 1){
        collatzSeq.push_back(n);
        
        if(n % 2 == 0){
            n = n / 2;
        }
        else{
            n = (3 * n) + 1;
        }
    }
    
    collatzSeq.push_back(1);
    
    vector<int> oddNumbers;
    
    for(int i = 0; i < collatzSeq.size(); i++){
        if(collatzSeq[i] % 2 != 0){
            oddNumbers.push_back(collatzSeq[i]);
        }
    }
    
    sort(oddNumbers.begin(), oddNumbers.end());
    
    return oddNumbers;
}