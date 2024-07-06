def select_words(s, n):
    words = s.split()
    result = [
        word
        for word in words
        if len(
            [char for char in word.lower() if char.isalpha() and char not in "aeiou"]
        )
        == n
    ]
    return result