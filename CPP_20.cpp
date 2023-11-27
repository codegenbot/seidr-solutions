vector<float> find_closest_elements(vector<float> numbers){
    float min_diff = INFINITY;
    pair<float, float> closest_elements;
    
    for(int i=0; i<numbers.size(); i++){
        for(int j=i+1; j<numbers.size(); j++){
            float diff = abs(numbers[i] - numbers[j]);
            if(diff < min_diff){
                min_diff = diff;
                closest_elements = make_pair(numbers[i], numbers[j]);
            }
        }
    }
    
    vector<float> result;
    result.push_back(closest_elements.first);
    result.push_back(closest_elements.second);
    
    return result;
}