Here is the solution:

string circular_shift(int x, int shift) {
    string str = to_string(x);
    if (shift >= str.length()) {
        reverse(str.begin(), str.end());
        return str;
    }
    string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (i < shift) {
            continue;
        }
        result += str[i - shift];
    }
    for (int i = 0; i < shift; i++) {
        result += str[i];
    }
    return result;
}