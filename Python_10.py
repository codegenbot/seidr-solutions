def is_palindrome(string: str) -> bool:
    """Test if given string is a palindrome"""
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    s = string.lower()
    i, j = 0, len(s) - 1
    while i < j and s[i] == s[j]:
        i += 1
        j -= 1
    return s + s[j:i:-1].lower() if i < j else s + "a" * (j - i)