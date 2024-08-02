def get_closest_vowel(word):
    word = word[::-1]
    for i in range(len(word)):
        if word[i] in "aeiouAEIOU":
            return word[i][::-1]
    return ""