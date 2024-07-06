int digitSum(string s) {
    int sum = 0;
    for (char c : s) {
        if (isalpha(c)) {
            c = toupper(c);
            sum += c - 'A' + 1; 
        }
    }
    #include <string>
    return sum;
}