```python
def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string

    for i in range(len(string), 0, -1):
        prefix = string[:i]
        suffix = string[i:]
        if is_palindrome(suffix):
            return prefix + suffix[::-1]
```