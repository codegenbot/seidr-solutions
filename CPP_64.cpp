int vowels_count(string s){
    int count = 0;
    string vowels = "aeiou";
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    
    if (s.back() == 'y') {
        count++;
    }
    
    for (char c : s) {
        if (vowels.find(c) != string::npos) {
            count++;
        }
    }
    
    return count;
}