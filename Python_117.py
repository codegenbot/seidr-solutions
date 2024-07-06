def select_words(s, n):
    words = s.split()
    if n <= 0:
        return []
    elif n == 1:
        return list(filter(lambda x: x.islower(), words))
    else:
        return list(
            filter(lambda x: all(c.islower() for c in x[1:]), words)
        )