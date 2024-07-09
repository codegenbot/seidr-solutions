float min_val = *min_element(numbers.begin(), numbers.end());
    float max_val = *max_element(numbers.begin(), numbers.end());
    for (size_t i = 0; i < numbers.size(); ++i) {
        numbers[i] = (numbers[i] - min_val) / (max_val - min_val);
    }
    return numbers;
}