vector<int> sum_product(vector<int> numbers){
    int sum = 0;
    int product = 1;
    
    for(int num : numbers){
        sum += num;
        product *= num;
    }
    
    vector<int> result;
    result.push_back(sum);
    result.push_back(product);
    
    return result;
}