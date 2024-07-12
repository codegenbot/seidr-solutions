def select_words(s, n):
    words = s.split()
    result = [
        word
        for word in words
        if sum(1 for char in word if char.lower() not in "aeiou") == n
    ]
    return result