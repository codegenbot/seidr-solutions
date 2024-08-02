def select_words(s, n):
    words = s.split()
    consonants = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ"
    result = []
    for word in words:
        count = sum(1 for letter in word if letter in consonants)
        if count == n:
            result.append(word)
    return result