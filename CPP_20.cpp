sort(numbers.begin(), numbers.end());
    float minDiff = numbers[1] - numbers[0];
    pair<float, float> closestPair = make_pair(numbers[0], numbers[1]);
    for(size_t i = 1; i < numbers.size()-1; ++i){
        float currDiff = numbers[i+1] - numbers[i];
        if(currDiff < minDiff){
            minDiff = currDiff;
            closestPair.first = numbers[i];
            closestPair.second = numbers[i+1];
        }
    }
    return closestPair;
}