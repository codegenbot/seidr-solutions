string circular_shift(int x, int shift){
    string str = to_string(x);
    int n = str.length();
    shift %= n;
    if(shift == 0){
        return str;
    }
    if(n <= 1){ // Edge case if number has only 1 digit
        return str;
    }
    if(shift >= n){
        reverse(str.begin(), str.end());
        return str;
    }
    string result = str.substr(n - shift, shift) + str.substr(0, n - shift);
    return result;
}