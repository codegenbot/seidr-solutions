```Python
def make_palindrome(s: str) -> str:
    s = s.lower()
    return s + s[::-1]