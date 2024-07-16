string result = text;
    char prev = ' ';
    int count = 0;
    for (int i = 0; i < text.size(); ++i) {
        if (text[i] == ' ') {
            count++;
            if (count > 2) {
                result[i] = '-';
            } else {
                result[i] = '_';
            }
        } else {
            result[i] = text[i];
            count = 0;
        }
    }
    return result;
}