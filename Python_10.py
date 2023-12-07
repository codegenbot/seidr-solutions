```
def make_palindrome(string: str) -> str:
    suffix = string[::-1]
    prefix = string[:len(suffix)]
    return prefix + suffix
```