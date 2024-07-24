int fizz_buzz(int n) {
    int count = 0;
    for (int i = 11; i < n; i += 11) {
        if (i % 13 == 0 || to_string(i).find('7') != string::npos)
            count++;
    }
    for (int i = 13; i < n; i += 13) {
        if (i % 11 == 0 || to_string(i).find('7') != string::npos)
            count++;
    }
    return count;
}