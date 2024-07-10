#include <stdio.h>
#include <string>
using namespace std;

bool check_if_last_char_is_a_letter(string txt) {
    if (txt.length() == 0) return false;
    string lastChar = txt.substr(txt.length() - 1, 1);
    for (int i = 0; i < txt.length(); i++) {
        if (txt[i] == ' ') {
            if (i + 1 == txt.length()) continue;
            else if (txt.substr(i + 1).find(lastChar) != string::npos) return false;
            break;
        }
    }
    for (char c = 'a'; c <= 'z'; c++) {
        if (c == lastChar[0]) return true;
    }
    for (char c = 'A'; c <= 'Z'; c++) {
        if (c == lastChar[0]) return true;
    }
    return false;
}