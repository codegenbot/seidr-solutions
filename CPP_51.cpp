string result = text;
    string vowels = "aeiouAEIOU";
    
    for(char vowel : vowels) {
        result.erase(remove(result.begin(), result.end(), vowel), result.end());
    }
    
    return result;
}