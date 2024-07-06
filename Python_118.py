
def get_closest_vowel(word):
    vowels = "aeiou"
    for i in range(len(word)-1, 0, -1):
        if word[i].lower() in vowels and word[i-1].isalpha():
            return word[i]
    return ""