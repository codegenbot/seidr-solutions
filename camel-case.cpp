Here is the solution:

string camelCase(string s) {
    string result = "";
    size_t pos = 0;
    while (pos < s.length()) {
        size_t nextDash = s.find("-", pos);
        if (nextDash == string::npos) {
            result += toUpper(s.substr(pos));
            break;
        }
        result += toUpper(s.substr(pos, nextDash - pos));
        pos = nextDash + 1;
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << camelCase(s) << endl;
    }
    return 0;
}