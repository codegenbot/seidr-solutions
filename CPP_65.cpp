string circular_shift(int x, int shift){
    string num = to_string(x);
    int n = num.size();
    shift %= n;
    if (shift == 0) return num;
    
    string result;
    if (shift > n) {
        for (int i = n-1; i >= 0; --i) {
            result += num[i];
        }
    } else {
        result = num.substr(n - shift) + num.substr(0, n - shift);
    }
    
    return result;
}