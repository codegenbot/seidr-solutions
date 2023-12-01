int vowels_count(string s){
    int count = 0;
    transform(s.begin(), s.end(), s.begin(), ::tolower); // Convert string to lowercase

    for(int i=0; i<s.length(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            count++;
        }
    }

    if(s[s.length()-1] == 'y'){ // Check if last character is 'y'
        count++;
    }

    return count;
}