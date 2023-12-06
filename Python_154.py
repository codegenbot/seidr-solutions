```
def kmp_search(text, pattern):
    n = len(text)
    m = len(pattern)
    i = 0
    j = 0
    while i < n and j < m:
        if text[i] == pattern[j]:
            i += 1
            j += 1
        else:
            i = i - j + 1
            j = 0
    if j == m:
        return i - m
    else:
        return -1

def cycpattern_check(a, b):
    return kmp_search(a, b) != -1
```