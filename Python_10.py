```Python
def make_palindrome(s: str) -> str:
    s = s[::-1] + s  
    return s