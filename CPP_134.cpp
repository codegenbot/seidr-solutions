bool check_if_last_char_is_a_letter(const std::string& txt) {
    return isalpha(txt.back());
}

int main() {
    std::string txt = "Hello World ";
    return check_if_last_char_is_a_letter(txt) && txt.size() > 0 && txt[txt.size() - 2] == ' ';
}