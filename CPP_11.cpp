string string_xor(string a, string b) {
    int result = 0;
    for (int i = 0; i < a.length(); i++) {
        if ((a[i] - '0') ^ (b[i] - '0')) {
            result ^= 1;
        }
    }
    ostringstream oss;
    oss << binary(result);
    return oss.str();
}

string binary(int n) {
    string str = "";
    do {
        str = (n & 1) ? "1" + str : "0" + str;
        n >>= 1;
    } while (n);
    return str;
}