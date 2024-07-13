```python
def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if not string:
        return "a"
    prefix = string
    while not is_palindrome(prefix):
        prefix += "a"
    suffix = prefix[::-1]
    return prefix + suffix