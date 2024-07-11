string numStr = to_string(x);
    int n = numStr.size();
    shift = shift % n;

    if (shift == 0) {
        return numStr;
    }

    string result;
    if (shift < n) {
        result = numStr.substr(n - shift) + numStr.substr(0, n - shift);
    } else {
        reverse(numStr.begin(), numStr.end());
        result = numStr;
    }

    return result;
}