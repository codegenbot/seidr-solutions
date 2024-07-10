def get_closest_vowel(word):
    for i in range(len(word) - 2, -1, -1):
        if word[i].lower() in "aeiou":
            if (
                not (word[i - 1].isalpha() and not word[i - 1].lower() in "aeiou")
                or i == 0
            ):
                if not (word[i + 2].isalpha() and not word[i + 2].lower() in "aeiou"):
                    return word[i]
    return ""