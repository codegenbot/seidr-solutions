
def select_words(s, n):
    return [word for word in s.split() if all(c.isalpha() and not c.isdigit() for c in word)]