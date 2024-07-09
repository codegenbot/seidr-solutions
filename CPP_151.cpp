long long double_the_difference(vector<vector<int>> &lst) {
    long long sum = 0;
    for (auto& inner : lst) {
        for (int num : inner) {
            if (num > 0 && modf(num, &num) == 0) { 
                sum += pow(num, 2); 
            }
        }
    }
    return sum;
}