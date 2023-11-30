vector<int> get_odd_collatz(int n){
    vector<int> result;
    while(n != 1){
        result.push_back(n);
        if(n % 2 == 0){
            n = n / 2;
        } else {
            n = (3 * n) + 1;
        }
    }
    result.push_back(1);
    vector<int> odd_result;
    for(int i = 0; i < result.size(); i++){
        if(result[i] % 2 != 0){
            odd_result.push_back(result[i]);
        }
    }
    sort(odd_result.begin(), odd_result.end());
    return odd_result;
}