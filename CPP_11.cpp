string result = "";
    int n = a.length();
    for (int i = 0; i < n; i++) {
        result += to_string((a[i] - '0') ^ (b[i] - '0'));
    }
    return result;
}