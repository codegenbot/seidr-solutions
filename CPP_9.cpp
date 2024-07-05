vector<int> result;
    if (numbers.empty()) return result;
    int max_so_far = numbers[0];
    for (int num : numbers) {
        if (num > max_so_far) {
            max_so_far = num;
        }
        result.push_back(max_so_far);
    }
    return result;
}