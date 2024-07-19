def is_palindrome(string: str) -> bool:
    """Test if given string is a palindrome"""
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    s = string.lower()
    i = len(s) - 1
    while i >= 0 and s[0] == s[i]:
        i -= 1
    palindromic_suffix = s[: i + 1]
    remaining_string = s[i + 1 :]
    return palindromic_suffix + remaining_string[::-1]