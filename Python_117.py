
```
def select_words(s, n):
    words = s.split()
    selected_words = []
    for word in words:
        if len(word) == n and word.isalpha():
            selected_words.append(word)
    return selected_words
```