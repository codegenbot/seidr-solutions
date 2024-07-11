string fix_spaces(string text) {
    string result = "";
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            if (result.length() > 0 && result[result.length()-1] != ' ') {
                result += "_";
            }
            else if (i+1 < text.length() && text[i+1] == ' ') {
                int count = 1;
                while(i+count < text.length() && text[i+count] == ' ')
                    count++;
                i += count - 1;
                result += "-";
            }
        } 
        else
            result += text[i];
    }
    return result;
}