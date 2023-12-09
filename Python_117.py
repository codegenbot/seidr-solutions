
def select_words(s, n):
    words = s.split()
    return [word for word in words if len(word) == n and word.isalpha() and all(char.isalpha() for char in word)]
```
The code is now valid and should run without any syntax errors.