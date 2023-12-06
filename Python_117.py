def select_words(s):
    words = s.split()
    return [word for word in words if len(word) == n and word.isalpha()]