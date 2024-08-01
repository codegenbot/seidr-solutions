def get_closest_vowel(word):
    word = word[::-1]
    for char in word:
        if char.lower() in "aeiou":
            return char[::-1]
    return ""