```
def find_max(words):
    max_word = ''
    max_length = 0
    for word in words:
        if len(set(word)) > max_length:
            max_length = len(set(word))
            max_word = word
        elif len(set(word)) == max_length:
            if word < max_word:
                max_word = word
    return max_word