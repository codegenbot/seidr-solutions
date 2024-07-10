bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

vector<float> rescale_to_unit(vector<float> numbers) {
    float min_val = *min_element(numbers.begin(), numbers.end());
    float max_val = *max_element(numbers.begin(), numbers.end());

    for (float &num : numbers) {
        num = (num - min_val) / (max_val - min_val);
    }

    return numbers;
}