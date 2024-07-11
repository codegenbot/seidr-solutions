def get_closest_vowel(word):
    word = word[::-1]
    for i in range(len(word) - 2):
        if (
            word[i].lower() in "aeiou"
            and not word[i + 1].isalpha()
            or not word[i + 2].isalpha()
        ):
            return word[i].lower()
    return ""