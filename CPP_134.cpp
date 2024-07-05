bool check_if_last_char_is_a_letter(string txt){
    if (txt.empty() || !isalpha(txt.back())) return false;
    size_t last_space = txt.rfind(' ');
    if (last_space == string::npos) return true;
    return isalpha(txt.back()) && last_space == txt.size() - 2;
}