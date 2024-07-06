
def select_words(s, n):
    if n > 1:
        return []
    words = s.split()
    return [word for word in words if len(word) == n and word.isalpha()]