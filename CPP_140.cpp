#include <iostream>
#include <string>
using namespace std;

string fix_spaces(const string& text) {
    string result;
    int space_count = 0;

    for (char c : text) {
        if (c == ' ') {
            space_count++;
        } else {
            if (space_count == 1) {
                result += '_';
            } else if (space_count > 1) {
                result += '-';
            }
            space_count = 0;
            result += c;
        }
    }

    if (space_count == 1) {
        result += '_';
    } else if (space_count > 1) {
        result += '-';
    }

    return result;
}

int main() {
    string text;
    getline(cin, text);
    string result = fix_spaces(text);
    cout << result << endl;
    return 0;
}