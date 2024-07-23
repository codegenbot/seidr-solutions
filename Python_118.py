def get_closest_vowel(word):
    for i in range(len(word) - 2, -1, -1):
        if word[i].lower() in "aeiou":
            if word[i - 1].lower() != "v" and word[i - 1].lower() != "w":
                return word[i]
    return ""