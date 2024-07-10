string fix_spaces(string text) {
    string result = "";
    for(int i=0; i < text.length(); i++) {
        if(text[i] == ' ') {
            if(i+1 >= text.length() || text[i+1] != ' ' || i+2 >= text.length() || text[i+2] != ' ') {
                result += '_';
            } else {
                int j = i;
                while(j < text.length() && text[j] == ' ') j++;
                result += '-';
                for(int k=i+3; k<j; k++) result += text[k];
                i = j-1;
            }
        } else {
            result += text[i];
        }
    }
    return result;
}