```
def reverse_delete(s, c):
    result = ''.join([ch for ch in s if ch not in c])
    return (result, result == result[::-1])
```