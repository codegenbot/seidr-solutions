int main() {
    string input;
    getline(cin, input);
  
    string result = "";
    bool capitalizeNext = false;

    for (char c : input) {
        if (c == '-') {
            capitalizeNext = true;
        } else {
            if (capitalizeNext) {
                result += toupper(c);
                capitalizeNext = false;
            } else {
                result += tolower(c);
            }
        }
    }

    cout << result << endl;

    return 0;
}