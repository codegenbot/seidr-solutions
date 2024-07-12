int main() {
    string input;
    getline(cin, input);

    bool capitalizeNext = false;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == '-') {
            capitalizeNext = true;
        } else {
            if (capitalizeNext) {
                input[i] = toupper(input[i]);
                capitalizeNext = false;
            }
        }
    }

    for (int i = 0; i < input.size(); i++) {
        if (input[i] != '-') {
            cout << input[i];
        }
    }

    return 0;
}