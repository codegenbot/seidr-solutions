Here is the completed code:

bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    string lastChar = txt.substr(txt.length() - 1);
    string restOfText = txt.substr(0, txt.length() - 1);
    size_t pos = 0;
    while ((pos = restOfText.find(' ')) != std::string::npos) {
        if (pos == txt.length() - 2) return true; // check the last character
        restOfText.erase(pos, 1);
    }
    return isalpha(lastChar[0]);
}