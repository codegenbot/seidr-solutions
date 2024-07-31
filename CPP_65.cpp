string s = to_string(x);
    int len = s.length();
    
    if (shift % len == 0) return s;
    
    if (shift > len) {
        reverse(s.begin(), s.end());
    } else {
        shift = len - shift % len;
        rotate(s.begin(), s.begin() + shift, s.end());
    }
    
    return s;
}