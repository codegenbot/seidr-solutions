string num = to_string(x);
    int len = num.length();
    shift %= len;
    if (shift == 0) {
        return num;
    } else {
        string result = num.substr(len - shift) + num.substr(0, len - shift);
        return result;
    }
}