Here is the solution:

void toCamelCase(string s) {
    string result = "";
    for (char c : s) {
        if (c == '-') {
            continue;
        }
        if (c == ' ') {
            result += char(toupper(result[0]));
            result.erase(0, 1);
        } else {
            result += tolower(c);
        }
    }
    cout << result << endl;
}

int main() {
    string s;
    while (cin >> s) {
        toCamelCase(s);
    }
    return 0;
}