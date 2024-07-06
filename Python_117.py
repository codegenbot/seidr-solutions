def select_words(s, n):
    words = s[:n].split()
    return list(filter(lambda x: any(c.islower() for c in x[1:]), words))