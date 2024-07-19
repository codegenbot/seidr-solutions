vector<int> get_odd_collatz(int n){
    vector<int> result;
    while(n != 1){
        result.push_back(n);
        n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
    }
    result.push_back(1);
    vector<int> oddNumbers;
    for(const auto &num : result){
        if(num % 2 != 0){
            oddNumbers.push_back(num);
        }
    }
    sort(oddNumbers.begin(), oddNumbers.end());
    return oddNumbers;
}