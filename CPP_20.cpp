vector<float> find_closest_elements(vector<float> numbers){
    sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    vector<float> result;
    for(int i=1; i<numbers.size()-1; i++){
        float diff = numbers[i+1] - numbers[i];
        if(diff < min_diff){
            min_diff = diff;
            result.clear();
            result.push_back(numbers[i]);
            result.push_back(numbers[i+1]);
        }
    }
    return result;
}