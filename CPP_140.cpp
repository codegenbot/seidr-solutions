const char* fix_spaces(const char* text) {
    bool isPrevSpace = false;
    string result = "";
    for (unsigned int i = 0; i < strlen(text); i++) { 
        if (text[i] == ' ') {
            if (!isPrevSpace) {
                result += "_"; 
                isPrevSpace = true;
            }
        } else {
            result += text[i]; 
            isPrevSpace = false;
        }
    }
    return result;