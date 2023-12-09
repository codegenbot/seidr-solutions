def select_words(s, n):
    return [word for word in s.split() if len(word) == n and word.isalpha()]