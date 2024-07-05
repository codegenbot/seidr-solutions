def find_max(words):
    return max(sorted(words), key=lambda word: len(set(word)))