vector<float> find_closest_elements(vector<float> numbers){
    sort(numbers.begin(), numbers.end());
    float min_diff = INFINITY;
    vector<float> result;
    
    for(int i=0; i<numbers.size()-1; i++){
        float diff = abs(numbers[i] - numbers[i+1]);
        if(diff < min_diff){
            min_diff = diff;
            result = {numbers[i], numbers[i+1]};
        }
    }
    
    return result;
}