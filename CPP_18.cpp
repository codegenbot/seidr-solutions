int how_many_times(string str, string substring) {
    int count = 0;
    if (substring == "") {
        return 0;
    }

    size_t pos = 0;
    while ((pos = str.find(substring, pos)) != string::npos) {
        pos += 1;
        count++;
    }

    return count;
}