vector<float> find_closest_elements(vector<float> numbers){
    vector<float> result;
    float minDiff = INFINITY;
    for(int i=0; i<numbers.size()-1; i++){
        for(int j=i+1; j<numbers.size(); j++){
            float diff = abs(numbers[i] - numbers[j]);
            if(diff < minDiff){
                minDiff = diff;
                result.clear();
                result.push_back(min(numbers[i], numbers[j]));
                result.push_back(max(numbers[i], numbers[j]));
            }
        }
    }
    return result;
}