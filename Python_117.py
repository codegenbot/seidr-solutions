
def select_words(s, n):
    words = s.split()
    return [word for word in words if len(word) == n and word.isalpha()]
```

Explanation:
The code snippet is a function named `select_words` that takes two arguments: a string `s` and an integer `n`. The function splits the input string into individual words using the `split()` method, then filters the list of words to only include those with length equal to `n`, and returns the filtered list.