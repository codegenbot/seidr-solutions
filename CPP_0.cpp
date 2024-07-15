sort(numbers.begin(), numbers.end());
    for (int i = 0; i < numbers.size() - 1; ++i) {
        if (numbers[i + 1] - numbers[i] < threshold) {
            return true;
        }
    }
    return false;
}