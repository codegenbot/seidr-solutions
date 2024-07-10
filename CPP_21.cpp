bool issame(vector<float> v1, vector<float> v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (size_t i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}

vector<float> rescale_to_unit(vector<float> numbers) {
    float min_num = numbers[0];
    float max_num = numbers[0];
    for (float num : numbers) {
        if (num < min_num) {
            min_num = num;
        }
        if (num > max_num) {
            max_num = num;
        }
    }

    vector<float> rescaled_numbers;
    for (float num : numbers) {
        float rescaled_num = (num - min_num) / (max_num - min_num);
        rescaled_numbers.push_back(rescaled_num);
    }

    return rescaled_numbers;
}

int main() {
    vector<float> input = {1.0, 2.0, 3.0};
    vector<float> expected_output = {0.0, 0.5, 1.0};
    vector<float> scaled_output = rescale_to_unit(input);

    bool result = issame(expected_output, scaled_output);
    cout << (result ? "Output matches expected result.\n" : "Output does not match expected result.\n");

    return 0;
}