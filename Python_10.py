```
def make_palindrome(s: str) -> str:
    if len(s) == 1:
        return s
    palindrome = ''
    for i in range(len(s)):
        palindrome += s[i]
    for i in range(len(s)-1, -1, -1):
        palindrome += s[i]
    return palindrome