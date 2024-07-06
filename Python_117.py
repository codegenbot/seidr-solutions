def select_words(s, n):
    words = s.split()
    result = []
    for word in words:
        if len(word) == n:
            result.append(word)
    return result