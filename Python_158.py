def find_max(words):
    return max(words, key=lambda x: (len(set(x)), x))