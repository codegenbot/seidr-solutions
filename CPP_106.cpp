vector<int> result;
    int fact = 1;
    int sum = 0;
    
    for (int i = 1; i <= n; ++i) {
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