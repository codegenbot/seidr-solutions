Here is the modified code that should work:
```
def longest(strings):
    if not strings:
        return None
    return max(strings, key=len)
```