int vowels_count(const std::string& s) {
    int count = 0;
    for (char c : s) {
        bool is_vowel = false;
        switch(c) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                is_vowel = true;
                break;
            case 'y':
                is_vowel = (s.rfind(c) == s.size() - 1);
                break;
        }
        if (is_vowel) {
            count++;
        }
    }
    return count;
}