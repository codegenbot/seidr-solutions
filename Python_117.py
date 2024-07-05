def select_words(s, n):
    words = s.split()
    return list(filter(lambda w: len([c for c in w if c.islower()]) == n, words))