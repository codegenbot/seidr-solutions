bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

vector<float> rescale_to_unit(vector<float> numbers){
    float min_num = numbers[0];
    float max_num = numbers[0];

    // Find the minimum and maximum numbers in the vector
    for (int i = 1; i < numbers.size(); i++) {
        if (numbers[i] < min_num) {
            min_num = numbers[i];
        }
        if (numbers[i] > max_num) {
            max_num = numbers[i];
        }
    }

    // Apply linear transformation to rescale the numbers
    vector<float> rescaled_numbers;
    for (int i = 0; i < numbers.size(); i++) {
        float rescaled_num = (numbers[i] - min_num) / (max_num - min_num);
        rescaled_numbers.push_back(rescaled_num);
    }

    return rescaled_numbers;
}

int main() {
    vector<float> input = {2.5, 1.0, 3.0, 4.5};
    vector<float> expected_output = {0.2, 0.0, 0.4, 1.0};
    vector<float> result = rescale_to_unit(input);

    if (issame(result, expected_output)) {
        cout << "Test case passed";
    } else {
        cout << "Test case failed";
    }

    return 0;
}