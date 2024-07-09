def select_words(s, n):
    words = s.split()
    result = []
    for word in words:
        consonants = sum(
            1
            for char in word
            if not char.isalpha() or char.lower() in "bcdfghjklmnpqrstvwxz"
        )
        if consonants == n:
            result.append(word)
    return result