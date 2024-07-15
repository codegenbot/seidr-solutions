std::vector<int> sum_product(std::vector<int> a) {
    int sum = 0, product = 1;
    for (int num : a) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}