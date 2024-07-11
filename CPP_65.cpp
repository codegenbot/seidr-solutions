string numStr = to_string(x);
    int n = numStr.length();
    if (shift > n) {
        reverse(numStr.begin(), numStr.end());
    } else {
        rotate(numStr.rbegin(), numStr.rbegin() + shift, numStr.rend());
    }
    return numStr;
}