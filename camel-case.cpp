Here is the solution:

void camel_case(string s) {
    string result = "";
    bool capitalizeNext = true;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            result += toupper(s[i]);
            capitalizeNext = false;
        } else {
            result += tolower(s[i]);
        }
    }

    cout << result << endl;
}

int main() {
    string s;
    while (cin >> s) {
        camel_case(s);
    }
    return 0;
}