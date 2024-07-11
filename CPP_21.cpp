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

vector<float> rescale_to_unit(vector<float> numbers) {
    float min_val = numbers[0];
    float max_val = numbers[0];
    for (float num : numbers) {
        if (num < min_val) {
            min_val = num;
        }
        if (num > max_val) {
            max_val = num;
        }
    }

    vector<float> rescaled_numbers;
    for (float num : numbers) {
        float rescaled_num = (num - min_val) / (max_val - min_val);
        rescaled_numbers.push_back(rescaled_num);
    }

    return rescaled_numbers;
}

int main() {
    vector<float> numbers = {3.0, 5.0, 1.0, 3.0, 2.0};
    
    vector<float> rescaled = rescale_to_unit(numbers);
    
    if (issame(rescaled, {0.5, 1.0, 0.0, 0.5, 0.25})) {
        cout << "Test passed\n";
    } else {
        cout << "Test failed\n";
    }
    
    return 0;
}