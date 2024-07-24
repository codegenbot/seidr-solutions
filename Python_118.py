def get_closest_vowel(word):
    word = word[::-1]
    for i in range(1, len(word)):
        if word[i].lower() in "aeiou":
            return word[i].upper()
    return ""