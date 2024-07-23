bool check_if_last_char_is_a_letter(string str) {
    if(str.size() > 0) {
        char last_char = str.back();
        return (isalpha(last_char));
    } else
        return false;
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pi e ") == false);
}