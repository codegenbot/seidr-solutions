int luhn(std::vector<std::string> digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        temp = std::stoi(digits[i]);
        if ((i % 2) == 1) {
            int temp = temp * 2;
            if (temp > 9)
                temp -= 9;
            sum += temp;
        } else
            sum += temp;
    }
    return sum;
}