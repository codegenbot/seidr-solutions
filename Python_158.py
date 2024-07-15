```
def find_max(words):
    max_len = 0
    result = ""
    for word in words:
        word_set = set(word)
        if len(word_set) > max_len:
            max_len = len(word_set)
            result = word
        elif len(word_set) == max_len:
            result = min(result, word)
    return result