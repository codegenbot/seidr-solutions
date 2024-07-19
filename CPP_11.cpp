Here is the solution:

string string_xor(string a, string b) {
    int result = 0;
    for (int i = 0; i < a.length(); i++) {
        if ((a[i] - '0') ^ (b[i] - '0')) {
            result ^= 1;
        }
    }
    ostringstream oss;
    oss << hex << setfill('0') << setw(2) << result;
    return oss.str();
}