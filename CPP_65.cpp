string circular_shift(int x, int shift) {
    string num = to_string(x);
    int n = num.length();
    shift = shift % n;
    
    if (shift == 0) {
        return num;
    } else if (shift > 0) {
        string shiftedNum = num.substr(n - shift) + num.substr(0, n - shift);
        return shiftedNum;
    } else {
        string reversedNum = num.substr(n + shift) + num.substr(0, n + shift);
        reverse(reversedNum.begin(), reversedNum.end());
        return reversedNum;
    }
}