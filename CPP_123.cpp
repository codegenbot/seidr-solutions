vector<int> get_odd_collatz(int n){
    vector<int> result;
    result.push_back(1); // Collatz(1) = {1}
    while(n != 1){
        result.push_back(n);
        if(n % 2 == 0){
            n = n/2;
        } else{
            n = 3*n + 1;
        }
    }
    sort(result.begin(), result.end());
    vector<int> odd_result;
    for(int i = 0; i < result.size(); i++){
        if(result[i] % 2 == 1){
            odd_result.push_back(result[i]);
        }
    }
    return odd_result;
}