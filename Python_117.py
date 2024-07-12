def select_words(s, n):
    words = s.split()
    consonants = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ"
    result = []
    for word in words:
        if sum(1 for letter in word if letter in consonants) == n:
            result.append(word)
    return result