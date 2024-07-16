bool issame(const vector<float>& a, const vector<float>& b) {
    return a == b; 
}

vector<float> rescale_to_unit(vector<float> numbers) {
    float min_num = *min_element(numbers.begin(), numbers.end());
    float max_num = *max_element(numbers.begin(), numbers.end());

    for (float &num : numbers) {
        num = (num - min_num) / (max_num - min_num);
    }

    return numbers;
}