def select_words(s, n):
    return list(filter(lambda w: len(w) == n, s.split()))