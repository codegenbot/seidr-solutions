def find_max(words):
    max_word = ''
    for word in words:
        if len(word) > len(max_word) or not max_word:
            max_word = word
    return max_word