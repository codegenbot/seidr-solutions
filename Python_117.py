def select_words(s, n):
    words = s.split()
    return [word for word in words if any(c.islower() for c in word)]