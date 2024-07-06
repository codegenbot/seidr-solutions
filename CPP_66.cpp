int digitSum(std::string s) {
    int sum = 0;
    for (char c : s) {
        if (!std::isdigit(c)) continue; 
        int digit = c - '0';
        sum += digit;
    }
    return sum;
}