int digitSum(const std::string& s) {
    int sum = 0;
    for(char c : s) {
        if(std::isupper(c)) {
            sum += static_cast<int>(c);
        }
    }
    return sum;
}