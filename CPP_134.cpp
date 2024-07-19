bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false; // If string is empty, last character doesn't exist so return false
    size_t pos = txt.find_last_of(' ');
    if (pos == string::npos || pos == txt.size() - 1) return isalpha(txt[pos]); // If no space or it's the last char in the string
    return isalpha(txt.back());
}