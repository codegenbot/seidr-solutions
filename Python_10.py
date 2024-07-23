def make_palindrome(s: str) -> str:
    for i in range(len(s)):
        postfix = s[i:]
        if postfix == postfix[::-1]:
            return s + postfix[::-1]
    return s + s[::-1]