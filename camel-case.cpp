int main() {
    string str;
    getline(cin, str);
    
    bool capitalize = false;
    for (char &c : str) {
        if (c == '-') {
            capitalize = true;
        } else if (capitalize) {
            c = toupper(c);
            capitalize = false;
        }
    }
    
    cout << str << endl;
    
    return 0;
}