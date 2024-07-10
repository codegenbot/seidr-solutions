Here is the completed code:

bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false; // empty string
    size_t last_space = txt.find_last_of(' ');
    if (last_space == string::npos || last_space == txt.size() - 1) return false;
    char c = txt.back();
    return isalpha(c);
}