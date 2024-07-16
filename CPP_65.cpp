string numStr = to_string(x);
    int n = numStr.size();
    shift %= n;
    if (shift == 0) {
        return numStr;
    }
    if (shift > n) {
        reverse(numStr.begin(), numStr.end());
        return numStr;
    }
    return numStr.substr(n - shift) + numStr.substr(0, n - shift);
}