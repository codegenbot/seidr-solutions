def is_palindrome(string: str) -> bool:
    """Test if given string is a palindrome"""
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    s = string.lower()
    for i in range(len(s), 0, -1):
        prefix = s[:i]
        postfix = s[i - 1 :: -1]
        if is_palindrome(prefix + postfix):
            return string + postfix
    return string + s[::-1]