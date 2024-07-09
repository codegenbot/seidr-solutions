string str = to_string(x);
    int n = str.size();
    shift = shift % n;
    
    if (shift == 0) {
        return str;
    }
    
    string result;
    for (int i = 0; i < n; i++) {
        result += str[(n - shift + i) % n];
    }
    return result;
}