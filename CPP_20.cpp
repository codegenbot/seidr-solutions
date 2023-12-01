vector<float> find_closest_elements(vector<float> numbers){
    sort(numbers.begin(), numbers.end());
    float min_diff = INFINITY;
    vector<float> closest_elements;
    for (int i = 1; i < numbers.size(); i++) {
        float diff = abs(numbers[i] - numbers[i-1]);
        if (diff < min_diff) {
            min_diff = diff;
            closest_elements = {numbers[i-1], numbers[i]};
        }
    }
    return closest_elements;
}