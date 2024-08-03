Here is the completed code:

bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    int lastSpace = txt.find_last_of(' ');
    if (lastSpace == string::npos || lastSpace == txt.length() - 1) {
        char c = txt.back();
        return isalpha(c);
    }
    return false;
}