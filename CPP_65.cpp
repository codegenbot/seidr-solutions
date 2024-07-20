string numStr = to_string(x);
    int len = numStr.length();
    shift %= len;
    if (shift == 0) {
        return numStr;
    }
    if (shift > len / 2) {
        reverse(numStr.begin(), numStr.end());
        return numStr;
    }
    return numStr.substr(len - shift) + numStr.substr(0, len - shift);
}