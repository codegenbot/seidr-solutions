int vowels_count(string s){
    int count = 0;
    string vowels = "aeiouAEIOU";
    for(char c : s){
        if(vowels.find(c) != string::npos){
            count++;
        }
    }
    if(!s.empty() && (s.back() == 'y' || s.back() == 'Y')){
        count--;
    }
    return count;
}