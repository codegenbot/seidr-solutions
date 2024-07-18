vector<int> max_values;
    int max_val = numbers[0];
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] > max_val) {
            max_val = numbers[i];
        }
        max_values.push_back(max_val);
    }
    return max_values;
}