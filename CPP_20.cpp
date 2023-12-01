vector<float> find_closest_elements(vector<float> numbers){
    float min_diff = INFINITY;
    float num1, num2;
    for (int i = 0; i < numbers.size(); i++){
        for (int j = i + 1; j < numbers.size(); j++){
            float diff = abs(numbers[i] - numbers[j]);
            if (diff < min_diff){
                min_diff = diff;
                num1 = min(numbers[i], numbers[j]);
                num2 = max(numbers[i], numbers[j]);
            }
        }
    }
    return {num1, num2};
}