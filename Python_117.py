def select_words(s, n):
    words = s.split()
    if len(words) < n:
        return []
    return [word for word in words if len([c for c in word if c.islower()]) == n]