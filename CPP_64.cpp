int vowels_count(string s){
    int count = 0;
    string vowels = "aeiouyAEIOUY";
    for(char c : s){
        if(vowels.find(c) != string::npos){
            if(c == 'y' && s.find_last_of('y') == s.size() - 1){
                count++;
            } else if(vowels.find(c) < 5){
                count++;
            }
        }
    }
    return count;
}