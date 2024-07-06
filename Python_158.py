def find_max(words):
    max_word = None
    max_chars = 0
    for word in words:
        if len(set(word)) > max_chars:
            max_chars = len(set(word))
            max_word = word
    return max_word