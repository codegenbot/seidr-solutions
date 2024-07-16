vector<int> result;
    for (size_t i = 0; i < numbers.size(); ++i) {
        result.push_back(numbers[i]);
        if (i != numbers.size() - 1) {
            result.push_back(delimeter);
        }
    }
    return result;
}