def select_words(s, n):
    if n <= 0:
        return []
    words = s[:n].split()
    if n == 1:
        return words
    else:
        return list(filter(lambda x: all(c.islower() for c in x[1:]), words))