vector<int> f(int n){
    vector<int> result;
    result.push_back(1);  // index 1 is 1
    int sum = 1;
    int factorial = 2;
    
    for(int i = 2; i <= n; i++){
        if(i % 2 == 0){
            factorial *= i;  // Calculate factorial
            result.push_back(factorial);
        } else {
            sum += i;  // Calculate sum
            result.push_back(sum);
        }
    }
    
    return result;
}