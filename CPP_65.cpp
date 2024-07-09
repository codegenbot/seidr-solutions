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
    rotate(numStr.rbegin(), numStr.rbegin() + shift, numStr.rend());
    return numStr;
}