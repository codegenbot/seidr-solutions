
def select_words(s, n):
    words = s.split()
    if n <= 0:
        return []
    else:
        return [word for word in words if len([c for c in word[1:] if c.islower()]) == n and len(word) > 0]