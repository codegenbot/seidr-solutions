```
def find_max():
    words = input("Enter words (space separated): ").split()
    max_word = ''
    max_length = 0
    for word in words:
        if len(word) > max_length:
            max_length = len(word)
            max_word = word
        elif len(word) == max_length:
            max_word = min(max_word, word)
    return max_word