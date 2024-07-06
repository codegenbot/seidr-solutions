def select_words(s, n):
    words = s.split()
    if n <= 0:
        return []
    elif n == 0:
        return words
    else:
        return [
            word[1:] for word in words if len([c for c in word[1:] if c.islower()]) == n
        ]