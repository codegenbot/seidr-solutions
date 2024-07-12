def get_closest_vowel(word):
    word = word[::-1]  # Reverse the string
    for char in word:
        if char.lower() in "aeiou":
            return char.lower()[::-1]  # Return the original case of the vowel
    return ""