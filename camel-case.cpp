Here is the solution:

void toCamelCase(string s) {
    string result;
    for (auto it = s.begin(); it != s.end(); ) {
        if (*it == '-') {
            it++; // skip '-'
            while (it != s.end() && *it == '-') {
                it++;
            }
            continue;
        }
        result.push_back toupper(*it);
        while (it + 1 != s.end() && *it != ' ') {
            result.push_back tolower(*++it);
        }
    }
    cout << result;
}
int main() {
    string str;
    cin >> str;
    toCamelCase(str);
    return 0;
}