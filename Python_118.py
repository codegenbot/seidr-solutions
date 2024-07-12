def get_closest_vowel(word):
    word = word[::-1]
    for i in range(len(word) - 2):
        if word[i] in "aeiouAEIOU":
            if (
                word[i + 1].lower() not in "aeiou"
                and word[i - 1].lower() not in "aeiou"
            ):
                return word[i][::-1]
    return ""