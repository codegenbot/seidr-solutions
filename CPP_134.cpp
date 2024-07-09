#include <string>

using namespace std;

bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    string words[] = {"a", "an", "the", "and", "is"};
    for (int i = 0; i < sizeof(words)/sizeof(words[0]); i++) {
        if (txt.find(words[i]) != string::npos) {
            return txt.back() >= 'a' && txt.back() <= 'z';
        }
    }
    return txt.back() >= 'a' && txt.back() <= 'z';
}