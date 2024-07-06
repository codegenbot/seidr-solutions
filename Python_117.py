def select_words(s, n):
    if n < 0:
        return []
    elif n == 0:
        return [words[0]]
    else:
        words = s[:n].split()
        return list(filter(lambda x: all(c.islower() for c in x[1:]), words)) or []