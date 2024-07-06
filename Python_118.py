
def get_closest_vowel(word):
    vowels = "aeiou"
    word = word[::-1]
    for i in range(len(word)):
        if word[i] in vowels:
            return word[i]
    return ""