def get_closest_vowel(word):
    for i in range(len(word) - 2, -1, -1):
        if word[i] in "aeiou":
            return word[i]
    return ""