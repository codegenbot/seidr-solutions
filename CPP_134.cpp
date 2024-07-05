bool check_if_last_char_is_a_letter(string txt){
    if (txt.empty() || !isalpha(txt.back())) return false;
    size_t pos = txt.find_last_of(' ');
    return pos != string::npos && pos == txt.size() - 2;
}