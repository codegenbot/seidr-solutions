Here is the completed code:

bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    size_t last_pos = txt.find_last_of(" ");
    if (last_pos == string::npos || last_pos == txt.size() - 1) return isalpha(txt.back());
    return isalpha(txt[txt.find_last_of(" ") + 1]);
}