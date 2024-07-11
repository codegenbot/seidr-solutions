int main() {
    string s;
    getline(cin, s);
    bool flag = false;
    for (char &c : s) {
        if (c == '-') {
            flag = true;
            continue;
        }
        if (flag) {
            c = toupper(c);
            flag = false;
        }
    }
    cout << s << endl;
    return 0;
}