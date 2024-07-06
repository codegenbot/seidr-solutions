def find_max(words):
    max_word = ""
    max_chars = 0
    for word in words:
        chars = set(word)
        if len(chars) > max_chars:
            max_chars = len(chars)
            max_word = word
    return max_word