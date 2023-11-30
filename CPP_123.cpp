vector<int> get_odd_collatz(int n){
    vector<int> result;
    while(n != 1){
        result.push_back(n);
        if(n % 2 == 0){
            n = n / 2;
        }
        else{
            n = (3 * n) + 1;
        }
    }
    result.push_back(1);

    vector<int> oddNumbers;
    for(int i = 0; i < result.size(); i++){
        if(result[i] % 2 != 0){
            oddNumbers.push_back(result[i]);
        }
    }
    sort(oddNumbers.begin(), oddNumbers.end());

    return oddNumbers;
}