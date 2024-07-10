int main() {
    return 0;
}

bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) {
        return false;
    }
    int i = 0;
    bool isWord = false;
    while (i < txt.length()) {
        if (!isalpha(txt[i])) {
            isWord = true;
            break;
        }
        i++;
    }
    if (!isWord) {
        return false;
    }
    char lastChar = txt.back();
    if (!isalpha(lastChar)) {
        return false;
    }
    return true;
}