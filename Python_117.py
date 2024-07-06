def select_words(s, n):
    if n <= 0:
        return []
    words = s.split()
    unique_words = set()
    for word in words:
        if len([c for c in word if c.islower()]) == n:
            unique_words.add(word)
    return list(unique_words)