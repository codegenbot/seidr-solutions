int vowels_count(std::string s) {
    int count = 0;
    for (char c : s) {
        if ((c >= 'a' && c <= 'z') && (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) {
            count++;
        } else if ((c >= 'A' && c <= 'Z') && (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')) {
            count++;
        }
    }
    return count;
}