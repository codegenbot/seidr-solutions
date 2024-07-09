def get_closest_vowel(word):
    word = word[::-1]
    for i in range(len(word) - 2):
        if (
            word[i].lower() in "aeiou"
            and word[i + 1].lower() != "a"
            and word[i + 1].lower() != "e"
            and word[i + 1].lower() != "i"
            and word[i + 1].lower() != "o"
            and word[i + 1].lower() != "u"
        ):
            return word[i].swapcase()
    return ""