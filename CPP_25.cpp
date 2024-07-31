std::vector<int> factorize(int num) {
    std::vector<int> factors;
    for (int i = 2; i <= num; ++i) {
        while (num % i == 0) {
            factors.push_back(i);
            num /= i;
        }
    }
    return factors;
}