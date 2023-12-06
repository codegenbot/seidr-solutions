def select_words(s, n):
    words = s.split()
    result = []
    for word in words:
        if len(word) == n and word.isalpha():
            result.append(word)
    return result