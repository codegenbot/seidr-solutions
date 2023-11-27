bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) {
        return false;
    }
  
    char lastChar = txt.back();
    if (!isalpha(lastChar)) {
        return false;
    }
  
    size_t lastSpacePos = txt.find_last_of(' ');
    if (lastSpacePos == string::npos) {
        return true;
    }
  
    size_t lastWordEndPos = txt.find_last_not_of(' ', lastSpacePos);
    if (lastWordEndPos == string::npos) {
        return true;
    }
  
    return lastWordEndPos < lastSpacePos;
}