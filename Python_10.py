```
def make_palindrome(string: str) -> str:
    s = ''.join(e for e in string if e.isalnum()).lower()
    return s + s[::-1]