string get_closest_vowel(string word){
    int i = word.length() - 1; // Start from the end of the string
    while(i >= 0 && !isvowel(word[i])){ // Keep moving left until we find a vowel or reach the beginning
        i--;
    }
    
    if(i < 0) return ""; // If no vowel is found, return empty string
    
    int j = i - 1; // Start from one position to the right of the last vowel
    while(j >= 0 && !isconsonant(word[j])){ // Keep moving left until we find a consonant or reach the beginning
        j--;
    }
    
    if(j < 0) return ""; // If no consonant is found, return empty string
    
    int k = i - 1; // Start from one position to the right of the last vowel
    while(k > j && !isconsonant(word[k])){ // Keep moving left until we find a consonant or reach the beginning
        k--;
    }
    
    for(int l = k; l >= j; l--){ // Iterate over the positions from the right to find the closest vowel
        if(isvowel(word[l])) return string(1, word[l]);
    }
    
    return ""; // If no vowel is found, return empty string
}

bool isconsonant(char c){
    return (c >= 'b' && c <= 'z') || (c >= 'B' && c <= 'Z'); // Check if the character is a consonant (English alphabet)
}

bool isvowel(char c){
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' 
            || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'); // Check if the character is a vowel (English alphabet)
}