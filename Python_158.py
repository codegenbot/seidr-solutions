```
def find_max(words):
    max_word = ""
    for word in words:
        if len(set(word)) > len(set(max_word)):
            max_word = word
        elif len(set(word)) == len(set(max_word)):
            max_word = min(word, max_word)
    return max_word