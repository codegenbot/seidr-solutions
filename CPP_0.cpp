sort(numbers.begin(), numbers.end());
    for (int i = 1; i < numbers.size(); ++i) {
        if (fabs(numbers[i] - numbers[i - 1]) < threshold) {
            return true;
        }
    }
    return false;
}