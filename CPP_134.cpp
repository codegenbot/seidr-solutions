bool check_if_last_char_is_a_letter(string txt) {
    if(txt.empty()) {
        return false;
    }

    int lastCharIndex = txt.size() - 1;
    char lastChar = txt[lastCharIndex];

    if(isalpha(lastChar)) {
        if (lastChar == ' ') {
            return true;
        }
        
        int spaceIndex = txt.find_last_of(' ');
        if (spaceIndex == string::npos || spaceIndex < lastCharIndex) {
            return true;
        }
    }

    return false;
}