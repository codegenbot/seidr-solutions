bool check_if_last_char_is_a_letter(const string& str) {
    if(str.empty()) return false;
    int c = static_cast<int>(str.back());  
    return ::isalpha(c);  
}