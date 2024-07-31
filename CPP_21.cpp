vector<float> rescale_to_unit(const vector<float>& numbers) {
    float min_num = *min_element(numbers.begin(), numbers.end());
    float max_num = *max_element(numbers.begin(), numbers.end());
    
    vector<float> rescaled_numbers;
    for (float num : numbers) {
        float rescaled_num = (num - min_num) / (max_num - min_num);
        rescaled_numbers.push_back(rescaled_num);
    }
    
    return rescaled_numbers;
}

bool issame(const vector<float>& vec1, const vector<float>& vec2) {
    return vec1 == vec2;
}

int main() {
    vector<float> numbers = {1.0, 2.0, 3.0, 4.0, 5.0};
    vector<float> rescaled_numbers = rescale_to_unit(numbers);
    
    // Testing if the rescaled numbers are the same as the original numbers
    if (issame(numbers, rescaled_numbers)) {
        cout << "Vectors are the same." << endl;
    } else {
        cout << "Vectors are different." << endl;
    }
    
    return 0;
}