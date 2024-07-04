vector<int> intersperse(vector<int> numbers, int delimeter) {
    if (numbers.empty()) return numbers;
    vector<int> result;
    result.push_back(numbers[0]);
    for (size_t i = 1; i < numbers.size(); ++i) {
        result.push_back(delimeter);
        result.push_back(numbers[i]);
    }
    return result;
}