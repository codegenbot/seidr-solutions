sort(numbers.begin(), numbers.end());
    pair<float, float> closestPair;
    float minDiff = abs(numbers[1] - numbers[0]);
    
    for(int i = 1; i < numbers.size(); i++){
        float diff = abs(numbers[i] - numbers[i-1]);
        if(diff < minDiff){
            minDiff = diff;
            closestPair.first = numbers[i-1];
            closestPair.second = numbers[i];
        }
    }
    
    return {closestPair.first, closestPair.second};
}