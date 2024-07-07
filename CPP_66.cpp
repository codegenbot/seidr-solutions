int digitSum(std::string s) {
    int sum = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (isupper(s[i])) {
            sum += tolower(s[i]) - 'a' + 1;
        }
    }
    return sum % 26;
}