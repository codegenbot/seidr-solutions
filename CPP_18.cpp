int how_many_times(string str, string substring) {
    int count = 0;
    if (substring.length() == 0) {
        return count;
    }
    for (int i = 0; i <= str.length() - substring.length(); i++) {
        bool found = true;
        for (int j = 0; j < substring.length(); j++) {
            if (str[i+j] != substring[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            count++;
        }
    }
    return count;
}