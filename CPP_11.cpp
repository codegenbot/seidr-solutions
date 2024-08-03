string string_xor(string a, string b) {
    int result = 0;
    for (int i = 0; i < a.size(); i++) {
        if ((a[i] - '0') ^ (b[i] - '0')) {
            result ^= 1;
        }
    }
    ostringstream oss;
    oss << hex << setfill('0') << setw(a.size()) << result;
    return oss.str();
}