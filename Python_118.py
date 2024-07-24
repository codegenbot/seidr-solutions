def get_closest_vowel(word):
    word = word[::-1]
    for i in range(len(word) - 2):
        if (
            word[i] in "aeiouAEIOU"
            and word[i + 1] not in "aeiouAEIOU"
            and word[i + 2] not in "aeiouAEIOU"
        ):
            return word[i][::-1]
    return ""