```cpp
string fix_spaces(string text) {
    string result = "";
    for(int i = 0; i < text.length(); i++) {
        if(text[i] == ' ') {
            if(i+1 >= text.length() || text[i+1] != ' ' || (i > 0 && text[i-1] != ' ')) {
                result += '_';
            } else {
                int j = i;
                while(j < text.length() && text[j] == ' ') {
                    j++;
                }
                for(int k = i; k < j; k++) {
                    result += '-';
                }
                i = j-1;
            }
        } else {
            result += text[i];
        }
    }
    return result;
}