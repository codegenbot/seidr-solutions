vector<int> factorize(int n){
    vector<int> factors;
    int i = 2;
    while (n > 1) {
        if (n % i == 0) {
            factors.push_back(i);
            n /= i;
        } else {
            i++;
        }
    }
    return factors;
}