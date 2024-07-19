std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<std::string> numbers;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            numbers.push_back(num > 5 ? "Greater five" : "Less or equal to five");
        }
    }

    return numbers;
}