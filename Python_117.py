```
def select_words(s, n):
    words = s.split()
    result = []
    for word in words:
        consonants = sum(1 for char in word if char.isalpha() and not char.lower().endswith('a') or not char.lower().endswith('e') or not char.lower().endswith('i') or not char.lower().endswith('o') or not char.lower().endswith('u'))
        if consonants == n:
            result.append(word)
    return result