```
def select_words(s, n):
    words = s.split()
    return [word for word in words if sum(1 for char in word.lower() if not 'aeiou'.__contains__(char)) == n]