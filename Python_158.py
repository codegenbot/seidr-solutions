def find_max(words):
    max_word = max((word for word in words), key=lambda x: len(set(x)))
    return max_word if all(c in max_word.lower() for c in max_word) else ""