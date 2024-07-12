```
def find_max(words):
    max_word = max((word for word in words), key=lambda w: len(set(w)))
    return max((w for w in words if len(set(w)) == len(set(max_word))), default=max_word)