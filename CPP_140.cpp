#include <iostream>
#include <string>
using namespace std;

string fix_spaces(string text) {
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            bool consecutiveSpace = false;
            for (int j = i + 1; j < text.length() && j > i; j++) {
                if (text[j] == ' ') {
                    consecutiveSpace = true;
                    break;
                } else {
                    consecutiveSpace = false;
                }
            }
            if (!consecutiveSpace) {
                text.replace(i, 1, "_");
            } else {
                while (i < text.length() - 1 && text[i + 1] == ' ') {
                    i++;
                }
                text.replace(i, 1, "-");
            }
        }
    }
    return text;
}

int main() {
    string text;
    cout << "Enter a string: ";
    getline(cin, text);
    cout << fix_spaces(text) << endl;
    return 0;
}