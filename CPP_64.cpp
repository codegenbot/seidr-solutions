int vowels_count(string s){
    int count = 0;
    string vowels = "aeiouAEIOU";
    for(char c : s) {
        if(vowels.find(c) != string::npos) {
            count++;
        }
    }
    if(!s.empty() && vowels.find(tolower(s.back())) != string::npos) {
        count++;
    }
    return count;
}