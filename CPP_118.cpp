string get_closest_vowel(string word){
    string vowels = "aeiouAEIOU";
    int right = word.size() - 1;
    
    while(right > 0 && !ispunct(word[right]) && !isalpha(word[right]))
        right--;
    
    for(int left = right; left >= 0 && !ispunct(word[left]) && !isalpha(word[left]); left--)
        if(find(vowels.begin(), vowels.end(), tolower(word[left])) != vowels.end())
            return string(1, word[left]);
    
    return "";
}