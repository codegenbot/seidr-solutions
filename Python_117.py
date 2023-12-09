def select_words(s, n):
    words = s.split()
    return [word for word in words if len(word) == n and re.match(r'^\w+$', word)]
```

In this code, we use the `re` module to match any non-alpha characters in the input string using the regular expression `r'^\w+$'`. If a match is found, we exclude that word from the output list.