def select_words(s, n):
    words = s.split()
    if n <= 0:
        return []
    elif n == 1:
        return list(filter(lambda x: x.islower(), words))
    else:
        return list(
            filter(lambda x: len([c for c in x[1:] if c.islower()]) <= n, words)
        )