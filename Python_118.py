def get_closest_vowel(word):
    vowels = "aeiouAEIOU"
    consonants = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ"
    
    for i in range(len(word)-2, 0, -1):
        if word[i] in vowels:
            for j in range(i+1, len(word)-1):
                if word[j] in consonants and word[j+1] in vowels:
                    return word[i]
    return ""