```
def get_closest_vowel(word):
    for i in range(len(word) - 1, 0, -1):
        if word[i].lower() in 'aeiou':
            for j in range(i-1, -1, -1):
                if not word[j].lower().isvowel():
                    return word[i]
            return ""
    return ""