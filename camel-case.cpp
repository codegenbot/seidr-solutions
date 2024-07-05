string toCamelCase(const string &s) {
    string result;
    bool toUpper = false;
    for (char ch : s) {
        if (ch == '-') {
            toUpper = true;
        } else {
            result += toUpper ? toupper(ch) : ch;
            toUpper = false;
        }
    }
    return result;
}

int main() {
    string input;
    getline(cin, input);
    stringstream ss(input);
    string word;
    bool first = true;
    while (ss >> word) {
        if (!first) cout << ' ';
        cout << toCamelCase(word);
        first = false;
    }
    return 0;
}