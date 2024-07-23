```cpp
string string_xor(string a, string b) {
    istringstream is_a(a), is_b(b);
    string result;
    char c, d;
    while (is_a >> c && is_b >> d) {
        if ((c - '0') ^ (d - '0')) {
            result += "1";
        } else {
            result += "0";
        }
    }
    return result;
}