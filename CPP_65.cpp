string x_str = to_string(x);
    int n = x_str.size();
    shift = shift % n;
    if (shift == 0)
        return x_str;
    else if (shift < 0)
        shift += n;
    return x_str.substr(n - shift) + x_str.substr(0, n - shift);
}