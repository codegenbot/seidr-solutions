```
def find_max(words):
    max_word = ""
    for word in words:
        unique_chars = set(word)
        if len(unique_chars) > len(set(max_word)):
            max_word = word
        elif len(unique_chars) == len(set(max_word)):
            max_word = min((word, max_word), key=lambda x: x)
    return max_word