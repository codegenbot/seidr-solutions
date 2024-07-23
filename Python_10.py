```
def make_palindrome(s: str) -> str:
    if s == s[::-1]:
        return s * 2
    palindrome = ''
    for i in range(len(s)):
        palindrome += s[i]
    for i in range(len(s)-1, -1, -1):
        palindrome += s[i]
    return palindrome + ''.join(c.upper() for c in s)