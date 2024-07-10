string str = to_string(x);
    int n = str.size();
    shift %= n;
    if (shift == 0) {
        return str;
    }
    string shifted = str.substr(n - shift) + str.substr(0, n - shift);
    return shifted;
}