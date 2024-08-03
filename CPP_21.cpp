bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<float> rescale_to_unit(vector<float> numbers);

int main() {
    vector<float> numbers = {2.5, 3.0, 1.5, 4.0};
    vector<float> rescaled_numbers = rescale_to_unit(numbers);

    vector<float> original = {2.5, 3.0, 1.5, 4.0};
    vector<float> expected = {0.5, 0.666667, 0.0, 1.0};
    
    issame(rescaled_numbers, expected);

    return 0;
}

vector<float> rescale_to_unit(vector<float> numbers) {
    float min_num = *min_element(numbers.begin(), numbers.end());
    float max_num = *max_element(numbers.begin(), numbers.end());
    vector<float> result;
    for (float num : numbers) {
        float rescaled_num = (num - min_num) / (max_num - min_num);
        result.push_back(rescaled_num);
    }
    return result;
}