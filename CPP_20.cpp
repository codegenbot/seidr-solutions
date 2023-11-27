vector<float> find_closest_elements(vector<float> numbers){
    float min_diff = std::numeric_limits<float>::max();
    float num1, num2;
    
    for(int i=0; i<numbers.size()-1; i++){
        for(int j=i+1; j<numbers.size(); j++){
            float diff = fabs(numbers[j] - numbers[i]);
            if(diff < min_diff){
                min_diff = diff;
                num1 = numbers[i];
                num2 = numbers[j];
            }
        }
    }
    
    vector<float> result;
    result.push_back(num1);
    result.push_back(num2);
    return result;
}