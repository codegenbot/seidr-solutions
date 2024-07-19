int vowels_count(string s){
    int count = 0;
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    for(char& c : s){
        if(find(begin(vowels), end(vowels), tolower(c)) != end(vowels) ||
           (tolower(c) == 'y' && &c == &s.back())){
            count++;
        }
    }
    return count;
}