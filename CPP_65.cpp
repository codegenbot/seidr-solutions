string circular_shift(int x, int shift) {
    string strX = to_string(x);
    int len = strX.length();
    
    if (shift > len) {
        reverse(strX.begin(), strX.end());
        return strX;
    }
    
    string temp = strX.substr(len - shift, shift);
    strX.erase(len - shift, shift);
    return temp + strX;
}