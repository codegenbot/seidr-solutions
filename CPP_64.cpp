int vowels_count(string s){
    int count = 0;
    string vowels = "aeiouy";
    for(char c : s){
        if (vowels.find(tolower(c)) != string::npos) {
            count++;
        }
    }
    if (!s.empty() && tolower(s.back()) == 'y') {
        count--;
    }
    return count;
}