int how_many_times(string str, string substring) {
    int count = 0;
    int pos = str.find(substring, 0);
    while (pos != string::npos) {
        count++;
        pos = str.find(substring, pos + 1);
    }
    return count;
}