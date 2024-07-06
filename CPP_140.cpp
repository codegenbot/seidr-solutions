string fix_spaces(string text) {
    for(int i = 0; i < text.size(); i++) {
        if(text[i] == ' ') {
            if(i > 0 && text[i-1] == ' ' && text[i+1] == ' ') {
                for(int j = i; (j < text.size()) && (text[j] == ''); j++) {
                    text.replace(j, 1, "-");
                }
                return text;
            } else if(i > 0) {
                text.insert(i,'_');
                i++;
            } else {
                text.insert(i,'_');
            }
        }
    }
    return text;
}