def get_closest_vowel(word):
    for i in range(len(word) - 1, -1, -1):
        if word[i].lower() in "aeiou":
            left = True
            for j in range(i - 1, -1, -1):
                if word[j].lower() not in "aeiou":
                    left = False
                    break
            if left:
                return word[i]
    return ""