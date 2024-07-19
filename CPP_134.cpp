Here is the completed code:

bool check_if_last_char_is_a_letter(string txt) {
    size_t last_space = txt.rfind(' ');
    if (last_space == string::npos || last_space == txt.size() - 1)
        return isalpha(txt.back());
    else
        return false;
}