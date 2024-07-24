```
def is_palindrome(s: str) -> bool:
    return s == s[::-1]

def make_palindrome(s: str) -> str:
    if s == s[::-1]:
        return s + s
    for i in range(len(s)):
        postfix = s[i:]
        if postfix == postfix[::-1]:
            prefix = s[:i][::-1]
            return prefix + postfix
    prefix = s[::-1]
    return prefix + s