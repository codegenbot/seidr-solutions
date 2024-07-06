def select_words(s, n):
    if n == 1:
        return s[:n].split()[0]
    elif n > 1:
        return list(filter(lambda x: all(c.islower() for c in x[1:]), s[:n].split()))
    else:
        return []