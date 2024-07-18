string num_str = to_string(x);
    int len = num_str.length();
    shift = shift % len;
    if (shift == 0) {
        return num_str;
    }
    string result = num_str.substr(len - shift) + num_str.substr(0, len - shift);
    return result;
}