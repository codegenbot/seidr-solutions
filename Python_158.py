def find_max(words):
    max_word = ""
    max_len = 0
    for word in words:
        unique_chars = set(word)
        if len(unique_chars) > max_len or (len(unique_chars) == max_len and max_word if max_len > len(unique_chars) else word) > word:
            max_word = word
            max_len = len(unique_chars)
    return max_word