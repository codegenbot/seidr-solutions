def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    s = string.lower()
    i = len(s) - 1
    while i > 0 and s[0] != s[i]:
        i -= 1
    if i <= 0:
        return s + s[::-1]
    else:
        return s + s[i:][::-1]