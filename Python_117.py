```
def select_words(s, n):
    words = s.split()
    return list(filter(lambda x: len(x) == n and x.isalpha(), words))
```