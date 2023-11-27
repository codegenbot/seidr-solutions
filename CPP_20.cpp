vector<float> find_closest_elements(vector<float> numbers){
    vector<float> result;
    float min_diff = INFINITY;
    for(int i=0; i<numbers.size(); i++){
        for(int j=i+1; j<numbers.size(); j++){
            float diff = abs(numbers[i] - numbers[j]);
            if(diff < min_diff){
                min_diff = diff;
                result.clear();
                result.push_back(numbers[i]);
                result.push_back(numbers[j]);
            }
        }
    }
    return result;
}