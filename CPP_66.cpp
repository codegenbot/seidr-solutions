int digitSum(string s) {
    int sum = 0;
    std::string result = "";
    for (char c : s) {
        if (isupper(c)) {
            sum += tolower(c) - 'a' + 1;
            result.push_back((sum % 26) + 'a' - 1); 
        }
    }
    return result;
}