Here is the solution:

string fix_spaces(string text) {
    string result = "";
    for (int i = 0; i < text.size(); i++) {
        if (text[i] == ' ') {
            if (result.empty() || result.back() != ' ') {
                result += '_';
            } else {
                int count = 1;
                while (i + 1 < text.size() && text[i+1] == ' ') {
                    i++;
                    count++;
                }
                for (int j = 0; j < count; j++) {
                    result += '-';
                }
                i--;
            }
        } else {
            result += text[i];
        }
    }
    return result;
}