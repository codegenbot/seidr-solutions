vector<int> unique_numbers;
    for (int i = 0; i < numbers.size(); ++i) {
        if (count(numbers.begin(), numbers.end(), numbers[i]) == 1) {
            unique_numbers.push_back(numbers[i]);
        }
    }
    return unique_numbers;
}