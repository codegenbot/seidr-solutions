int vowels_count(string s){
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int count = 0;
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    
    for(char &c : s){
        if(find(begin(vowels), end(vowels), c) != end(vowels)){
            count++;
        }
    }
    
    if (!s.empty() && s.back() == 'y'){
        count++;
    }
    
    return count;
}