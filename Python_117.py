def select_words(s, n):
    words = s.split()
    return [
        word
        for word in words
        if len(word) == n and word.isalpha() and all(char.isalnum() for char in word)
    ]