#include <iostream>
#include <string>

string fix_spaces(string text) {
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            text[i] = '_';

            // Check for consecutive spaces
            int count = 1;
            int j = i + 1;
            while (j < text.length() && text[j] == ' ') {
                count++;
                j++;
            }

            // Replace consecutive spaces with '-'
            if (count > 2) {
                text.replace(i + 1, count - 1, "-");
            }
        }
    }
    return text;
}

int main() {
    string input;
    getline(cin, input);
    cout << fix_spaces(input) << endl;
    return 0;
}