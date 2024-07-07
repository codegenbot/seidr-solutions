bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    size_t lastSpace = txt.find_last_of(' ');
    if (lastSpace == string::npos || lastSpace == txt.size() - 1) return false;
    char c = txt.back();
    return isalpha(c);
}