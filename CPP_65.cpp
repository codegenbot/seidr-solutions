string circular_shift(int x, int shift){
    string str = to_string(x);
    int n = str.length();
    shift %= n;
    
    if (shift == 0) {
        return str;
    } else {
        string result = str.substr(n - shift) + str.substr(0, n - shift);
        return result;
    }
}