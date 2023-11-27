vector<int> get_odd_collatz(int n){
    vector<int> result;
    
    while(n != 1){
        result.push_back(n);
        
        if(n % 2 == 0){
            n = n / 2;
        }else{
            n = (3 * n) + 1;
        }
    }
    
    result.push_back(1);
    
    // Sort the vector in increasing order
    sort(result.begin(), result.end());
    
    // Filter out the even numbers
    vector<int> oddCollatz;
    for(int i=0; i<result.size(); i++){
        if(result[i] % 2 != 0){
            oddCollatz.push_back(result[i]);
        }
    }
    
    return oddCollatz;
}