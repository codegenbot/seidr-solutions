int digitSum(const std::string& s) {
    int sum = 0;
    for (char c : s) {
        if (isupper(c)) {
            sum += c;
        }
    }
    return sum;
}