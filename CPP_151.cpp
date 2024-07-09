unsigned long doubleTheDifference(const std::vector<unsigned long>& input) {
    unsigned long sum = 0;
    for (const auto& num : input) {
        sum += num;
    }
    return static_cast<unsigned long>(sum * sum - 2 * sum * (input.size() % 2 ? input[input.size()-1] : 0));
}