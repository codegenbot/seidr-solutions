
def select_words(s, n):
    return [word for word in s.split() if len([c for c in word if c.isalpha() and not c.isdigit()]) == n]