int vowels_count(string s){
    int count = 0;
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
        else if (c == 'y' && s.length() - 1 == find(s.begin(), s.end(), c) - s.begin()) {
            count++;
        }
    }
    return count;
}