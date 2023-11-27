vector<float> find_closest_elements(vector<float> numbers){
    sort(numbers.begin(), numbers.end());
    vector<float> result;
    float minDiff = INT_MAX;
    
    for(int i = 0; i < numbers.size() - 1; i++){
        float diff = abs(numbers[i] - numbers[i+1]);
        if(diff < minDiff){
            minDiff = diff;
            result.clear();
            result.push_back(numbers[i]);
            result.push_back(numbers[i+1]);
        }
    }
    
    return result;
}