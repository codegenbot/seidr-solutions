```
def count_upper(s):
    return len([c for c in s if c.isupper() and ord(c) % 2 == 0])
```