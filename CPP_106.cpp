vector<int> f(int n){
    vector<int> result;
    int sum = 0, fact = 1;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            fact *= i;
            result.push_back(fact);
        } else {
            sum += i;
            result.push_back(sum);
        }
    }
    return result;
}