int main() {
    return 0;
}

string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            char baseChar = isupper(c) ? 'A' : 'a';
            c = ((c - baseChar + 2 * 26) % 26) + baseChar;
        }
        result += c;
    }
    return result;
}