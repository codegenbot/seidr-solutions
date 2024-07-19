int vowels_count(string s){
    int count = 0;
    string vowels = "aeiouyAEIOUY";
    for(char c : s) {
        if(vowels.find(c) != string::npos && (c != 'y' || &c == &s.back())) {
            count++;
        }
    }
    return count;
}