vector<float> find_closest_elements(vector<float> numbers){
    float min_difference = INFINITY;
    float num1, num2;
    
    for(int i=0; i<numbers.size()-1; i++){
        for(int j=i+1; j<numbers.size(); j++){
            float difference = abs(numbers[i] - numbers[j]);
            if(difference < min_difference){
                min_difference = difference;
                num1 = min(numbers[i], numbers[j]);
                num2 = max(numbers[i], numbers[j]);
            }
        }
    }
    
    return {num1, num2};
}