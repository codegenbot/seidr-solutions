int vowels_count(string s){
    int count = 0;
    string vowels = "aeiouAEIOU";
    for(char c : s){
        if(vowels.find(c) != string::npos || (c == 'y' && s.back() == 'y')){
            count++;
        }
    }
    return count;
}