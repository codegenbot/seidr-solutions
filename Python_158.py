```
def find_max(words):
    max_word = max((word for word in words), key=lambda x: len(set(x)))
    return max((word for word in words if len(set(word)) == len(set(max_word))), key=words.index)