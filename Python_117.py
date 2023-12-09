def select_words(s, n):
    words = s.split()
    return [words for word in words if len(word) == n and word.isalpha()]