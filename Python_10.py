def make_palindrome(s: str) -> str:
    if s == s[::-1]:
        return s + s
    for i in range(len(s)):
        if s[i:] == s[i:][::-1]:
            return s[:i] + s[i:][::-1] + s[i:][::-1]
    return s + s[::-1]