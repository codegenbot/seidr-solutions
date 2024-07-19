int vowels_count(string s){
    int count = 0;
    string vowels = "aeiouyAEIOUY";

    if (!s.empty()) {
        if (vowels.find(s.back()) != string::npos) {
            count++;
        }

        for (int i = 0; i < s.size() - 1; i++) {
            if (vowels.find(s[i]) != string::npos) {
                count++;
            }
        }
    }

    return count;
}