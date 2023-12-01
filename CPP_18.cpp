int how_many_times(string str, string substring) {
    int count = 0;
    int subLen = substring.length();
    int strLen = str.length();

    for (int i = 0; i <= strLen - subLen; i++) {
        if (str.substr(i, subLen) == substring) {
            count++;
        }
    }

    return count;
}