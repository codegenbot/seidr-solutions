Here is the solution:

string get_closest_vowel(string word){
    int i = word.size() - 1; // start from the end of the string
    while(i > 0 && !isvowel(word[i])) i--; // move to the left until a vowel is found or we reach the beginning of the string
    if(i <= 0) return ""; // no vowel was found, return an empty string
    int j = i - 1; // start from the right side of the previous vowel
    while(j >= 0 && !isconsonant(word[j])) j--; // move to the left until a consonant is found or we reach the beginning of the string
    if(j < 0) return ""; // no consonant was found, return an empty string
    int k = i - 1; // start from the right side of the previous vowel
    while(k > j && !isvowel(word[k])) k--; // move to the left until a vowel is found or we reach the beginning of the substring
    if(k <= j) return ""; // no vowel was found, return an empty string
    return word.substr(j+1, k-j); // return the substring with the closest vowel
}

bool isvowel(char c){
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

bool isconsonant(char c){
    c = tolower(c);
    return (!isalpha(c) || !isvowel(c));
}