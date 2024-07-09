vector<float> rescale_to_unit(vector<float> numbers) {
    if (numbers.size() == 0) return vector<float>();

    float minVal = *min_element(numbers.begin(), numbers.end());
    float maxVal = *max_element(numbers.begin(), numbers.end());

    if (maxVal - minVal == 0)
        return vector<float>(numbers.size(), 1.0); 

    vector<float> result(numbers.size(), 0.0f);
    for (float num : numbers) {
        result.push_back((num - minVal) / (maxVal - minVal));
    }

    return result;
}