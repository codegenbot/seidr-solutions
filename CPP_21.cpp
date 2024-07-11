bool issame(const vector<float>& a, const vector<float>& b) {
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

vector<float> rescale_to_unit(const vector<float>& numbers) {
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
    // Test case for the issame function
    vector<float> a = {1.0, 2.0, 3.0};
    vector<float> b = {1.0, 2.0, 3.0};
    
    if (issame(a, b)) {
        cout << "vectors a and b are the same" << endl;
    } else {
        cout << "vectors a and b are different" << endl;
    }
    
    return 0;
}