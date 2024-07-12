def select_words(s, n):
    words = s.split()
    result = [
        word
        for word in words
        if sum(1 for char in word if not char.isalpha() or char.lower() in "aeiou") != n
    ]
    return result