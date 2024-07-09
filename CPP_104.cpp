std::vector<int> unique_digits(std::vector<int> values) {
    std::vector<int> unique;
    for (int val : values) {
        while (val > 0) {
            int digit = val % 10;
            if (std::find(unique.begin(), unique.end(), digit) == unique.end()) {
                unique.push_back(digit);
            }
            val /= 10;
        }
    }
    std::sort(unique.begin(), unique.end());
    return unique;
}