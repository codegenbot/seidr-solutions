vector<int> sum_product(vector<int> numbers){
    vector<int> result(2, 1);

    if(numbers.empty()){
        return result;
    }

    result[0] = 0;
    result[1] = 1;
    for(int num : numbers){
        result[0] += num;
        result[1] *= num;
    }
    return result;
}