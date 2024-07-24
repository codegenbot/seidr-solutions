int main() {
    string str;
    getline(cin, str);

    bool capitalize = false;
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == '-') {
            capitalize = true;
        } else if (str[i] == ' ') {
            capitalize = false;
        } else {
            if (capitalize && isalpha(str[i])) {
                str[i] = toupper(str[i]);
            }
        }
    }

    cout << str << endl;

    return 0;
}