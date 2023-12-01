vector<float> find_closest_elements(vector<float> numbers){
    vector<float> result;
    float min_diff = INFINITY;
    int n = numbers.size();
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            float diff = abs(numbers[i] - numbers[j]);
            if(diff < min_diff){
                min_diff = diff;
                result.clear();
                result.push_back(min(numbers[i], numbers[j]));
                result.push_back(max(numbers[i], numbers[j]));
            }
        }
    }
    return result;
}