int vowels_count(string s){
    int count = 0;
    string vowels = "aeiouy";
    for(char c : s){
        if(vowels.find(tolower(c)) != string::npos){
            count++;
        }
    }
    if(s.back() == 'y' || s.back() == 'Y'){
        count--;
    }
    return count;
}