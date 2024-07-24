int digitSum(string s) {
    int sum = 0;
    for (char c : s) {
        if (isupper(c)) {
            sum += tolower(c) - 'A' + 1; 
        }
    }
    return sum;
}