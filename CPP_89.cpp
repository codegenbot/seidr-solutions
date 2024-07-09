Here is the completed code:

string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            char base = (c > 'm') ? 'a' : 'm';
            result += (char)((c - base + 2 * 26 / 2) % 26 + base);
        } else {
            result += c;
        }
    }
    return result;
}