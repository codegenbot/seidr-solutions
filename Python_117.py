def select_words(s, n):
    words = s.split()
    res = []
    for word in words:
        consonants = sum(1 for letter in word if letter.lower() not in 'aeiou')
        if consonants == n:
            res.append(word)
    return res