vector<float> find_closest_elements(vector<float> numbers){
    sort(numbers.begin(), numbers.end()); // sort the numbers in ascending order
    
    float minDiff = INT_MAX; // initialize the minimum difference to a very large value
    int minIndex1, minIndex2;
    
    // find the two numbers with the smallest difference
    for(int i = 0; i < numbers.size() - 1; i++){
        float diff = abs(numbers[i] - numbers[i+1]);
        if(diff < minDiff){
            minDiff = diff;
            minIndex1 = i;
            minIndex2 = i+1;
        }
    }
    
    vector<float> result;
    result.push_back(numbers[minIndex1]);
    result.push_back(numbers[minIndex2]);
    
    return result;
}