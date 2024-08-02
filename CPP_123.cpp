vector<int> result;
    while(n != 1){
        result.push_back(n);
        if(n % 2 == 0){
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
    }
    result.push_back(1);
    
    vector<int> oddNumbers;
    for(int num : result){
        if(num % 2 != 0){
            oddNumbers.push_back(num);
        }
    }
    
    sort(oddNumbers.begin(), oddNumbers.end());
    
    return oddNumbers;
}