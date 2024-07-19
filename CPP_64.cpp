int vowels_count(string s){
    int count = 0;
    string vowels = "aeiou";
    char lastChar = tolower(s.back());

    if (vowels.find(lastChar) != string::npos)
        count++;

    for(char c : s){
        if (vowels.find(tolower(c)) != string::npos)
            count++;
    }

    return count;
}