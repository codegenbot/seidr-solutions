std::vector<int> unique_digits(std::vector<int> values) {
    std::vector<int> result;
    for (int num : values) {
        while (num != 0) {
            int digit = num % 10;
            if (std::find(result.begin(), result.end(), digit) == result.end()) {
                result.push_back(digit);
            }
            num /= 10;
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}