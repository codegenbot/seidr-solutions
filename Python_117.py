
def select_words(s, n):
    if n <= 0:
        return []
    words = s.split()
    return [word for word in words if len([c for c in word if c.islower()]) == n]