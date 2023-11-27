int how_many_times(string str, string substring) {
    int count = 0;
    if (substring.length() == 0) {
        return 0;
    }
    for (int i = 0; i <= str.length() - substring.length(); i++) {
        if (str.substr(i, substring.length()) == substring) {
            count++;
        }
    }
    return count;
}