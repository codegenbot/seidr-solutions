vector<int> result;
    if (numbers.empty()) return result;
    int current_max = numbers[0];
    for (int num : numbers) {
        if (num > current_max) current_max = num;
        result.push_back(current_max);
    }
    return result;
}