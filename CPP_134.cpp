#include <string>
using namespace std;

bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    string lastChar = txt.substr(txt.length() - 1);
    for (int i = 0; i < txt.length() - 1; i++) {
        if (txt[i] == ' ') {
            if (lastChar == txt.substr(i + 1)) {
                return false;
            }
        }
    }
    return isalpha(txt.back());
}