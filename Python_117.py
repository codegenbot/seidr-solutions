Here is the modified code:

def select_words(s, n):
    words = s.split()
    result = []
    for word in words:
        consonants = sum(1 for char in word.lower() if not 'aeiou'.__contains__(char))
        if consonants == n:
            result.append(word)
    return result