string str = to_string(x);
    int n = str.size();
    shift = shift % n;
    if(shift == 0) return str;
    if(shift > n) {
        reverse(str.begin(), str.end());
        return str;
    }
    reverse(str.begin(), str.end());
    reverse(str.begin(), str.begin() + shift);
    reverse(str.begin() + shift, str.end());
    return str;
}