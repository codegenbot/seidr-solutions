int count_upper(string s){
    int count = 0;
    string vowels = "AEIOU";
    for(int i = 0; i < s.length(); i += 2){
        char c = s[i];
        if(isupper(c) && vowels.find(c) != string::npos){
            count++;
        }
    }
    return count;
}