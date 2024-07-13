def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    s = string.lower()
    for i in range(len(s)):
        if s[i:] + s[:i][::-1] == s[::-1]:
            return string[0].upper() + s[i:] + s[:i][::-1]
    for i in range(len(s)):
        if s[i:] + s[:i][::-1] != s[::-1]:
            return string[0].upper() + s + s[::-1]