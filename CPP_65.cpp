string circular_shift(int x, int shift) {
    string numStr = to_string(x);
    int n = numStr.size();
    
    if (shift % n == 0) {
        return numStr;
    } else {
        shift %= n;
        string shiftedNum = numStr.substr(n - shift) + numStr.substr(0, n - shift);
        return shiftedNum;
    }
}