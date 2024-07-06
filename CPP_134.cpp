int length = txt.length();
if (length == 0) {
    return false;
}
char last_char = txt.at(length - 1);
bool is_word_end = (length > 1 && txt.rfind(' ') != txt.npos);
return isalpha(last_char) && !is_word_end;