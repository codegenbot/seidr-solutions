Here is the completed code:

string string_sequence(int n) {
    string result = "0";
    for (int i = 1; i <= n; i++) {
        result += to_string(i) + " ";
    }
    return result;
}