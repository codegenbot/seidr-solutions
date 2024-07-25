string fix_spaces(string text){
    string result = "";
    bool lastCharWasSpace = false;

    for(char c : text) {
        if(c == ' ') {
            if(lastCharWasSpace) {
                result += "-";
            } else {
                result += "_";
            }
            lastCharWasSpace = true;
        } else {
            result += c;
            lastCharWasSpace = false;
        }
    }

    return result;
}