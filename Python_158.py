def find_max(words):
    return max(words, key=lambda word: (-len(set(word)), word))