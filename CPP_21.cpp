vector<float> rescale_to_unit(vector<float> numbers){
    float min_val = *min_element(numbers.begin(), numbers.end());
    float max_val = *max_element(numbers.begin(), numbers.end());
    float diff = max_val - min_val;
    vector<float> result;
    for(int i = 0; i < numbers.size(); i++){
        float rescaled_val = (numbers[i] - min_val) / diff;
        result.push_back(rescaled_val);
    }
    return result;
}