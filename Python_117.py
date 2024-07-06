
def select_words(s, n):
    words = [word for word in s.split() if len(word) == n and word.isalpha()]
    return words