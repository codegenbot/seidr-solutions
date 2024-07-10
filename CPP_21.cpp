bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
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
    vector<float> numbers = {1.0, 2.0, 3.0, 4.0, 5.0};
    vector<float> expected_output = {0.0, 0.25, 0.5, 0.75, 1.0};

    vector<float> output = rescale_to_unit(numbers);
    if (issame(output, expected_output)) {
        cout << "Output matches expected result." << endl;
    } else {
        cout << "Output does not match expected result." << endl;
    }

    return 0;
}