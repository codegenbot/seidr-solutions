string circular_shift(int x, int shift) {
    string numStr = to_string(x);
    int n = numStr.size();
    
    shift = shift % n;
    if (shift == 0) {
        return numStr;
    }
    
    string result;
    if (shift > n) {
        for (int i = n - 1; i >= 0; i--) {
            result += numStr[i];
        }
    } else {
        result = numStr.substr(n - shift) + numStr.substr(0, n - shift);
    }
    
    return result;
}