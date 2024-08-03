def get_closest_vowel(word):
    vowels = "AEIOU"
    for i in range(len(word) - 2, -1, -1):
        if word[i] in vowels:
            if not (word[i - 1].isalpha() and word[i - 1] not in vowels) and not (
                word[i + 2].isalpha() and word[i + 2] not in vowels
            ):
                return word[i]
    return ""