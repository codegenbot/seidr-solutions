vector<float> find_closest_elements(vector<float> numbers){
    float min_diff = abs(numbers[0] - numbers[1]);
    float elem1 = numbers[0];
    float elem2 = numbers[1];
    for (int i = 0; i < numbers.size()-1; i++){
        for (int j = i+1; j < numbers.size(); j++){
            float diff = abs(numbers[i] - numbers[j]);
            if (diff < min_diff){
                min_diff = diff;
                elem1 = numbers[i];
                elem2 = numbers[j];
            }
        }
    }
    vector<float> result;
    result.push_back(elem1);
    result.push_back(elem2);
    return result;
}