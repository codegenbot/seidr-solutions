def select_words(s, n):
    words = s[:n].split()
    if n <= 0:
        return []
    else:
        return words[:n]