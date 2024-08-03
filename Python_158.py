```
def find_max(words):
    max_word = ''
    max_len = 0
    for word in words:
        if len(set(word)) > max_len:
            max_len = len(set(word))
            max_word = word
        elif len(set(word)) == max_len:
            max_word = min(max_word, word)
    return max_word