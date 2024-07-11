vector<int> f(int n){
    vector<int> result;
    result.push_back(1);
    int sum = 1;
    for (int i = 1; i < n; i++) {
        if (i % 2 == 0) {
            sum *= i;
            result.push_back(sum);
        } else {
            sum += i + 1;
            result.push_back(sum);
        }
    }
    return result;
}