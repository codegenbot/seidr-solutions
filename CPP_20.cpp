vector<float> find_closest_elements(vector<float> numbers){
    sort(numbers.begin(), numbers.end());
    float minDiff = INT_MAX;
    pair<float, float> closestPair;
    
    for(int i = 0; i < numbers.size()-1; i++){
        float diff = numbers[i+1] - numbers[i];
        if(diff < minDiff){
            minDiff = diff;
            closestPair = make_pair(numbers[i], numbers[i+1]);
        }
    }
    
    vector<float> result = {closestPair.first, closestPair.second};
    return result;
}