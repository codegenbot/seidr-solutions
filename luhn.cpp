int luhn(std::string ccNum) {
    long long sum = 0;
    for (char c : ccNum) {
        int digit = c - '0';
        if ((ccNum.find(c) % 2 == 1)) {
            digit *= 2;
            if (digit > 9)
                digit -= 9;
        }
        sum += digit;
    }
    return static_cast<int>(sum);
}