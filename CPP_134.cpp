bool check_if_last_char_is_a_letter(const std::string& txt) {
    return isalpha(txt.back());
}

int main() {
    // Existing code
    return check_if_last_char_is_a_letter(txt) && txt.size() > 0 && txt[txt.size() - 2] == ' ';
}