vector<int> unique_numbers;
    for (int num : numbers) {
        if (count(numbers.begin(), numbers.end(), num) == 1) {
            unique_numbers.push_back(num);
        }
    }
    return unique_numbers;
}