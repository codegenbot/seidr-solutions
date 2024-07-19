def get_closest_vowel(word):
    vowels = "AEIOUaeiou"
    consonants = "BCDFGHJKLMNPQRSTVWXYZbcdfghjklmnpqrstvwxyz"
    
    for i in range(len(word)-2, 0, -1):
        if word[i] in vowels:
            for j in range(i-1, 0, -1):
                if word[j] in consonants:
                    return word[i]
    return ""