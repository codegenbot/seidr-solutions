def find_max(words):
    max_word = max((word for word in words), key=lambda w: len(set(w)), default='')
    return max_word if max_word else min(words)