bool check_if_last_char_is_a_letter(string txt){
    if (txt.empty() || txt.back() == ' ') return false;
    size_t lastSpace = txt.find_last_of(' ');
    return isalpha(txt.back()) && (lastSpace == string::npos || lastSpace == txt.length() - 2);
}