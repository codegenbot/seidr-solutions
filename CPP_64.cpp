int vowels_count(string s){
    int count = 0;
    string vowels = "aeiouy";
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(char c : s){
        if(vowels.find(c) != string::npos){
            count++;
        }
    }
    if(s.back() == 'y' && vowels.find(s.back()) != string::npos){
        count--;
    }
    return count;
}