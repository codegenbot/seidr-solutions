string fix_spaces(string text) {
    string result = "";
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            if (result.length() > 0 && result[result.length()-1] != ' ') {
                result += '_';
            }
            else if (i < text.length() - 1 && text[i+1] == ' ' && text[i+2] == ' ') {
                i++;
                while (i < text.length() && text[i] == ' ') i++;
                result += '-';
            }
            else {
                result += '_';
            }
        } 
        else {
            result += text[i];
        }
    }
    return result;
}