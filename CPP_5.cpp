vector<int> result;
    for (int i = 0; i < numbers.size(); ++i) {
        if (i > 0) {
            result.push_back(delimeter);
        }
        result.push_back(numbers[i]);
    }
    return result;