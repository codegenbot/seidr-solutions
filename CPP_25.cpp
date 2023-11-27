vector<int> factorize(int n){
    vector<int> factors;
    int divisor = 2;
    
    while (n > 1){
        if (n % divisor == 0){
            factors.push_back(divisor);
            n /= divisor;
        }
        else{
            divisor++;
        }
    }
    
    return factors;
}