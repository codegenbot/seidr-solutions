vector<int> sum_product(vector<int> numbers){
    int sum = 0, product = 1;
    for(int num : numbers){
        sum += num;
        product *= num;
    }
    return {sum, product};
}