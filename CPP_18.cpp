int how_many_times(string str, string substring) {
    int count = 0;
    int pos = 0;
    while ((pos = str.find(substring)) != string::npos) {
        count++;
        pos += substring.length();
    }
    return count;
}