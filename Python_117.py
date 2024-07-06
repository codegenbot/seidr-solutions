
def select_words(s, n):
    words = s.split()
    return words[:n] if len(words) > n else words