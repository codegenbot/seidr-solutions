```c++
bool check_if_last_char_is_a_letter(const std::string& str) {
    if(str.empty()) return false;
    return !isalnum(str.back());
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pi e ") == false);
}