int count_upper(const string& s) {
    int count = 0;
    string vowels = "AEIOU";
    for (int i = 0; i < s.length(); i += 2) {
        if (vowels.find(s[i]) != string::npos) {
            count++;
        }
    }
    return count;
}