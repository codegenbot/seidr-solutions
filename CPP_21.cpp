vector<float> rescale_to_unit(vector<float> numbers) {
    float min = *min_element(numbers.begin(), numbers.end());
    float max = *max_element(numbers.begin(), numbers.end());

    vector<float> result;
    for (float num : numbers) {
        result.push_back((num - min) / (max - min));
    }
    return result;
}