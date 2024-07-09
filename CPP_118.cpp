int left = word.length();
for(int i = 0; i < word.length(); i++) {
    if(isvowel(word[i])) {
        return string(1, tolower(word[i]));
    }
}
return "a"; // Return 'a' if no vowel is found in the word