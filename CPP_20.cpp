vector<float> find_closest_elements(vector<float> numbers){
    float min_diff = INFINITY;
    float first_num, second_num;
    
    for(int i=0; i<numbers.size(); i++){
        for(int j=i+1; j<numbers.size(); j++){
            float diff = abs(numbers[i] - numbers[j]);
            if(diff < min_diff){
                min_diff = diff;
                first_num = numbers[i];
                second_num = numbers[j];
            }
        }
    }
    
    vector<float> result;
    result.push_back(first_num);
    result.push_back(second_num);
    
    return result;
}