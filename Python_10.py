def is_palindrome(string: str) -> bool:
    """Test if given string is a palindrome"""
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    rev = string[::-1]
    for i in range(len(string)):
        if string[: i + 1] == string[: i + 1][::-1]:
            return string + rev[len(string) - i :]