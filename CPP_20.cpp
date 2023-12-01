vector<float> find_closest_elements(vector<float> numbers) {
    vector<float> result;
    float minDiff = abs(numbers[0] - numbers[1]);
    int index1 = 0;
    int index2 = 1;
    
    for(int i=0; i<numbers.size()-1; i++) {
        for(int j=i+1; j<numbers.size(); j++) {
            float diff = abs(numbers[i] - numbers[j]);
            if(diff < minDiff) {
                minDiff = diff;
                index1 = i;
                index2 = j;
            }
        }
    }
    
    result.push_back(min(numbers[index1], numbers[index2]));
    result.push_back(max(numbers[index1], numbers[index2]));
    
    return result;
}