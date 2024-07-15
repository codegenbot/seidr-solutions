vector<float> find_closest_elements(vector<float> numbers){
    sort(numbers.begin(), numbers.end());
    pair<float, float> closest;
    float min_diff = INFINITY;
    for(int i = 1; i < numbers.size(); i++){
        if(numbers[i] - numbers[i - 1] < min_diff){
            closest.first = numbers[i - 1];
            closest.second = numbers[i];
            min_diff = numbers[i] - numbers[i - 1];
        }
    }
    return {closest.first, closest.second};
}