int vowels_count(string s){
    int count = 0;
    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    
    for(char c : s){
        if(find(begin(vowels), end(vowels), c) != end(vowels)){
            count++;
        }
    }
    
    if(s.back() == 'y' || s.back() == 'Y'){
        count--;
    }
    
    return count;
}