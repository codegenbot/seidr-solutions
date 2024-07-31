int vowels_count(string s){
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int count = 0;
    for(char c : s){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            count++;
        }
    }
    if(s.back() == 'y'){
        count--;
    }
    return count;
}