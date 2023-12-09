def select_words(s, n):
    words = s.split()
    return [word for word in words if len(word) == n and word[0].isalpha() and word[-1].isalpha()]