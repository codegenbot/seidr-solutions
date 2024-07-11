def is_palindrome(string: str) -> bool:
    """Test if given string is a palindrome"""
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    prefix = ""
    while True:
        for i in range(len(string), -1, -1):
            prefix += string[:i][::-1]
            suffix = string[i:]
            if is_palindrome(prefix + suffix):
                return prefix + suffix