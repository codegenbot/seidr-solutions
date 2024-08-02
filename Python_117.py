```
def select_words(s, n):
    words = s.split()
    result = []
    for word in words:
        consonants = sum(c.isalpha() and not c.lower().endswith('a', 'e', 'i', 'o', 'u') for c in word)
        if consonants == n:
            result.append(word)
    return result