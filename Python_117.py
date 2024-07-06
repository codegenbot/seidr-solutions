def select_words(s, n):
    min_len = n
    words = s.split()
    return [word for word in words if len(word) >= min_len and word.isalpha()]