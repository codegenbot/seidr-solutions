def find_longest_word(sentence: str) -> str:
    words = sentence.split()
    longest_word = max(words, key=len)
    return longest_word