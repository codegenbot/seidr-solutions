def select_words(strings, n):
    words = []
    for string in strings:
        if len(string) == n and all(c.isalpha() for c in string):
            words.append(int(string))
    return words