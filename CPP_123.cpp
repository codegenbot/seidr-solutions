vector<int> get_odd_collatz(int n){
    vector<int> collatzSeq;
    collatzSeq.push_back(n);
    
    while(n != 1){
        if(n % 2 == 0){
            n = n / 2;
        } else {
            n = (3 * n) + 1;
        }
        collatzSeq.push_back(n);
    }
    
    vector<int> oddCollatzSeq;
    for(int i = 0; i < collatzSeq.size(); i++){
        if(collatzSeq[i] % 2 != 0){
            oddCollatzSeq.push_back(collatzSeq[i]);
        }
    }
    
    sort(oddCollatzSeq.begin(), oddCollatzSeq.end());
    
    return oddCollatzSeq;
}