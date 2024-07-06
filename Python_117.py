def select_words(s, n):
    if len(s) <= 1:
        return []
    words = s.split()
    return [word for word in words if len(word) == n and word.isalpha()][0]