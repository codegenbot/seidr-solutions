bool check_if_last_char_is_a_letter(string txt){
    if (txt.empty() || txt.back() == ' ') return false;
    if (isalpha(txt.back())) {
        size_t last_space = txt.find_last_of(' ');
        return last_space == string::npos || last_space == txt.size() - 2;
    }
    return false;
}