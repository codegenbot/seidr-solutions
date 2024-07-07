int vowels_count(string s) {
    int count = 0;
    for (char c : s) {
        if ("aeiouAEIOU".find(toupper(c)) != string::npos)
            count += c == 'y' && s.back() == c ? 1 : 1;
    }
    return count;
}