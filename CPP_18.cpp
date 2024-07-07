int how_many_times(string str, string substring) {
    int count = 0;
    int start = 0;

    while (true) {
        start = str.find(substring, start);
        if (start == string::npos)
            break;
        count++;
        start += 1; // +1 to avoid overlapping
    }

    return count;
}