def select_words(s, n):
    words = s.split()
    if n <= 0:
        return []
    elif n == 0:
        return words
    else:
        return words