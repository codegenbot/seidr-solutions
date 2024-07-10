vector<float> get_positive(vector<float> l){
    vector<float> positive_numbers;
    for(float num : l){
        if(num > 0) positive_numbers.push_back(num);
    }
    return positive_numbers;
}