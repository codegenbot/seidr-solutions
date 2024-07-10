vector<int> unique_numbers;
sort(numbers.begin(), numbers.end());
for (int i = 0; i < numbers.size(); ++i) {
    if (i == 0 && numbers[i] != numbers[i + 1]) {
        unique_numbers.push_back(numbers[i]);
    } else if (i == numbers.size() - 1 && numbers[i] != numbers[i - 1]) {
        unique_numbers.push_back(numbers[i]);
    } else if (numbers[i] != numbers[i - 1] && numbers[i] != numbers[i + 1]) {
        unique_numbers.push_back(numbers[i]);
    }
}
return unique_numbers;