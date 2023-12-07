def find_max(words):
    max_word = None
    for word in words:
        if max_word is None or len(set(word)) > len(set(max_word)):
            max_word = word
    return max_word