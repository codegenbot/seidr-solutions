def get_closest_vowel(word):
    for i in range(len(word) - 2, -1, -1):
        if word[i] in "aeiou":
            for j in range(i + 1, len(word)):
                if not word[j].lower() in "aeiou":
                    return word[i]
    return ""