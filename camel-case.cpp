```cpp
int main() {
    void toCamelCase(string s) {
        string result = "";
        for (char c : s) {
            if (c == '-') {
                if (!result.empty()) {
                    result[0] -= 32;
                }
                result += c + " ";
            } else if (c == ' ') {
                if (!result.empty() && result.back() != '-') {
                    result[0] -= 32;
                }
                result = "";
            } else {
                if (result.empty()) {
                    result += c;
                } else {
                    result += toupper(c);
                }
            }
        }
        cout << result;
    }

    string s; 
    cin >> s;
    toCamelCase(s);

    return 0;
}