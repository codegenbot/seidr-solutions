```
def select_words(s, n):
    result = []
    words = s.split()
    for word in words:
        consonants = sum(1 for char in word if char.lower() not in 'aeiou ')
        if consonants == n:
            result.append(word)
    return result