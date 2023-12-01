vector<int> get_odd_collatz(int n){
    vector<int> collatzSeq;
    collatzSeq.push_back(n);
    
    while(n != 1){
        if(n % 2 == 0){
            n = n / 2;
        } else{
            n = (3 * n) + 1;
        }
        collatzSeq.push_back(n);
    }
    
    vector<int> oddNumbers;
    for(int num : collatzSeq){
        if(num % 2 != 0){
            oddNumbers.push_back(num);
        }
    }
    
    sort(oddNumbers.begin(), oddNumbers.end());
    
    return oddNumbers;
}