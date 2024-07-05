vector<int> result;
    if (numbers.empty()) return result;
    int current_max = numbers[0];
    result.push_back(current_max);
    for (size_t i = 1; i < numbers.size(); ++i) {
        current_max = max(current_max, numbers[i]);
        result.push_back(current_max);
    }
    return result;
}