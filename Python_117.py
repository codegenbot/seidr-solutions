def select_words(s, n):
    words = s.split()
    consonants = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ"
    result = [
        word for word in words if sum(1 for letter in word if letter in consonants) == n
    ]
    return result