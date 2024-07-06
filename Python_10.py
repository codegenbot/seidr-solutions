def is_palindrome(string: str) -> bool:
    """Test if given string is a palindrome"""
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    s = string[::-1]
    for i in range(len(s)):
        if s[i:] == s[i:][::-1]:
            return string + s[i:]
    return string + s