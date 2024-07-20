int vowels_count(string s){
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    int count = 0;
    for(char c : s){
        if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            count++;
        }
    }
    if(!s.empty() && (s.back() == 'Y')){
        count++;
    }
    return count;
}