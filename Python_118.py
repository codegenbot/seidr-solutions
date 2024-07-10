def get_closest_vowel(word):
    for i in range(len(word)-2, 0, -1):
        if word[i] in "aeiouAEIOU" and word[i-1] not in "aeiouAEIOU" and word[i+1] not in "aeiouAEIOU":
            return word[i]
    return ""