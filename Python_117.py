
```
def select_words(s, n):
    words = s.split()
    if len(words) < n:
        return []
    return [word for word in words if len(word) == n and word.isalpha()]
``` 