def get_closest_vowel(word):
    vowels = "aeiouAEIOU"
    word = word[::-1][1:-1]
    for char in word:
        if char in vowels:
            return char
    return ""