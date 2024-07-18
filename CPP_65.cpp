string original = to_string(x);
    int n = original.size();
    
    if (shift > n) {
        reverse(original.begin(), original.end());
        return original;
    }
    
    shift %= n;
    string shifted = original.substr(n - shift) + original.substr(0, n - shift);
    return shifted;
}