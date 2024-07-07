int digitSum(std::string s) {
    int sum = 0;
    for (char c : s) {
        if (isdigit(c)) {
            sum += std::stoi(std::string(1, c)) - 48; 
        }
    }
    return sum;

}