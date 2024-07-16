sort(numbers.begin(), numbers.end());
    auto it = unique(numbers.begin(), numbers.end());
    numbers.resize(distance(numbers.begin(), it));
    return numbers;
}