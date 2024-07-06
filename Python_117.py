def select_words(s, n):
    words = s.split()
    result = []
    for word in words:
        if len([c for c in word if c.islower()]) == n:
            result.append(word)
    return result