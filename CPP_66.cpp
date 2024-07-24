int digitSum(string s) {
    int sum = 0;
    for (char c : s) {
        if (isupper(c)) {
            sum += tolower(c) - 'A' + 1; // convert to lowercase and add ASCII value of 'a'
        }
    }
    return sum;
}