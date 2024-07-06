vector<int> get_digits() {
    std::string input;
    std::cin >> input;
    vector<int> digits;
    for (auto c : input) {
        if (isdigit(c)) {
            digits.push_back(atoi(&c));
        }
    }
    return digits;
}