int digitSum(string s){
    int sum = 0;
    for (char ch : s) {
        if (ch >= 'A' && ch <= 'Z') {
            sum += ch;
        }
    }
    return sum;
}