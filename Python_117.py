```
def select_words(s, n):
    words = s.split()
    return list(filter(lambda word: len(word) == n and word.isalpha(), words))
```