int digitSum(string s) {
    int sum = 0;
    for (char c : s) {
        if (isupper(c)) {
            sum += tolower(c) - 'a' + 1; // Convert uppercase letter to lowercase and calculate digit value
        }
    }
    return sum % 9; 
}