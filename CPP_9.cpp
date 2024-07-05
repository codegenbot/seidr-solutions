vector<int> result;
    if (numbers.empty()) return result;
    int max_so_far = numbers[0];
    result.push_back(max_so_far);
    for (size_t i = 1; i < numbers.size(); ++i) {
        if (numbers[i] > max_so_far) {
            max_so_far = numbers[i];
        }
        result.push_back(max_so_far);
    }
    return result;
}