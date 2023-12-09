```python
def reverse_delete(s, c):
    result = ""
    for char in s:
        if char not in c:
            result += char
    return (result[::-1], result == result[::-1])
```