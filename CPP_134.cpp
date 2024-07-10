#include <cctype>
using namespace std;

int check_if_last_char_is_a_letter(string txt) {
    bool space = false;
    for (int i = 0; i < txt.length(); i++) {
        if (txt[i] == ' ') {
            space = true;
            break;
        }
    }
    return space && isalpha(txt.back());
}