int digitSum(std::string s) {
    int sum = 0;
    for (char c : s) {
        sum += c - '0';
    }
    return sum;
}