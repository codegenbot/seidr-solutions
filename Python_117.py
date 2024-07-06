
def select_words(s, n):
    words = s[:n].split()
    if n <= 0:
        return []
    elif n == 1:
        return words + [words[-1]]
    else:
        return list(filter(lambda x: all(c.islower() for c in x[1:]), words)) or []