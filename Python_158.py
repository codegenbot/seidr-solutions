def find_max(words):
    return min(words, key=lambda x: (-len(set(x)), x))