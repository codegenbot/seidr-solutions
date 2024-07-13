int main() {
    string str;
    getline(cin, str);
    
    bool capitalize = false;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '-') {
            capitalize = true;
        } else if (str[i] != ' ') {
            if (capitalize) {
                cout << (char)toupper(str[i]);
                capitalize = false;
            } else {
                cout << str[i];
            }
        }
    }
    
    return 0;
}