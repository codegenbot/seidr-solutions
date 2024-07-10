```
def find_max(words):
    max_word = ''
    max_length = 0
    for word in words:
        if len(set(word)) > max_length or (len(set(word)) == max_length and word < max_word):
            max_word = word
            max_length = len(set(word))
    return max_word