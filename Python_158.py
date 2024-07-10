```
def find_max(words):
    max_word = None
    max_length = 0
    for word in words:
        if len(set(word)) > max_length:
            max_word = word
            max_length = len(set(word))
        elif len(set(word)) == max_length:
            if word < max_word:
                max_word = word
    return max_word