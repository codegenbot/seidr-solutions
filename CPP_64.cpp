int vowels_count(string s){
    int count = 0;
    string vowels = "aeiouAEIOUyY";
    if (s.length() > 0 && s.find_last_of("yY") == s.length() - 1) {
        for (char c : s) {
            if (vowels.find(c) != string::npos) {
                count++;
            }
        }
    }
    return count;
}