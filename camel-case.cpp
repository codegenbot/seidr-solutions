int main() {
    string input;
    getline(cin, input);

    string output = "";
    bool capitalize = false;
    for(char c : input) {
        if(c == ' ') {
            capitalize = true;
        } else if(c == '-') {
            capitalize = true;
        } else {
            if(capitalize) {
                output += toupper(c);
                capitalize = false;
            } else {
                output += tolower(c);
            }
        }
    }

    cout << output << endl;

    return 0;
}