def get_closest_vowel(word):
    vowels = "aeiou"
    for i in range(len(word) - 2, -1, -1):
        if word[i].lower() in vowels:
            return word[i]
    return ""