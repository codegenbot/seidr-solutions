```
def find_max(words):
    max_len = 0
    result = ""
    for word in words:
        unique_chars = set(word)
        if len(unique_chars) > max_len:
            max_len = len(unique_chars)
            result = word
        elif len(unique_chars) == max_len:
            result = min(result, word)
    return result