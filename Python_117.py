def select_words(s, n):
    words = s.split()
    consonants = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ"
    result = []
    for word in words:
        if len([c for c in word if c in consonants]) == n:
            result.append(word)
    return result