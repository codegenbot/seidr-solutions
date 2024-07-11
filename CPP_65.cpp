string circular_shift(int x, int shift) {
    string numStr = to_string(x);
    int len = numStr.length();
    
    if (shift > len) {
        reverse(numStr.begin(), numStr.end());
        return numStr;
    }
    
    rotate(numStr.rbegin(), numStr.rbegin() + shift, numStr.rend());
    return numStr;
}