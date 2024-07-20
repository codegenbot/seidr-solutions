string num = to_string(x);
    int n = num.size();
    shift = shift % n;
    if (shift == 0) {
        return num;
    } else {
        return num.substr(n - shift) + num.substr(0, n - shift);
    }
}