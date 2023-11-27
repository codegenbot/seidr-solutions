int vowels_count(string s){
    int count = 0;
    transform(s.begin(), s.end(), s.begin(), ::tolower); // convert the string to lowercase
    
    if(s.back() == 'y' || s.back() == 'Y') { // check if the last character is 'y' or 'Y'
        count++;
    }
    
    for(char c : s) { // iterate through each character in the string
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') { // check if the character is a vowel
            count++;
        }
    }
    
    return count;
}