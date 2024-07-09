int count = 0;
    string vowels = "AEIOU";
    for(int i = 0; i < s.length(); i += 2){
        char c = toupper(s[i]);
        if(vowels.find(c) != string::npos){
            count++;
        }
    }
    return count;
}