vector<float> find_closest_elements(vector<float> numbers){
    sort(numbers.begin(), numbers.end());
    vector<float> result;
    float minDiff = numbers[1] - numbers[0];
    for(int i = 1; i < numbers.size() - 1; i++){
        if(numbers[i+1] - numbers[i] < minDiff){
            minDiff = numbers[i+1] - numbers[i];
            result.clear();
            result.push_back(numbers[i]);
            result.push_back(numbers[i+1]);
        }
    }
    return result;
}