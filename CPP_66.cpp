int digitSum(const string& s) {
    int sum = 0;
    for (auto c : s) {
        if (isdigit(c)) {
            sum += stoi(string(1, c) - '0'); 
        }
    }
    return sum;
}