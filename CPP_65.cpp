string numStr = to_string(x);
    int n = numStr.size();
    shift %= n;
    if (shift == 0) {
        return numStr;
    } else {
        string shiftedNum = numStr.substr(n - shift) + numStr.substr(0, n - shift);
        return shiftedNum;
    }
}