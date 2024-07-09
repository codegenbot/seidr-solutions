int string_xor(string a, string b) {
    string result = "";
    for (int i = 0; i < a.size(); i++) {
        result += (a[i] - '0') ^ (b[i] - '0') ? "1" : "0";
    }
    return stoi(result);