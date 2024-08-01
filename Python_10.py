```
def make_palindrome(string: str) -> str:
    s = string.lower()
    n = 0
    while n < len(s) and s[n] == s[-1 - n]:
        n += 1
    return s[:n][::-1] + s + s[n:][::-1]