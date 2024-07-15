vector<int> intersperse(vector<int> numbers, int delimiter) {
    vector<int> result;
    if(numbers.empty()) {
        return result;
    }
    result.push_back(numbers[0]);
    for(int i = 1; i < numbers.size(); ++i) {
        result.push_back(delimiter);
        result.push_back(numbers[i]);
    }
    return result;
}