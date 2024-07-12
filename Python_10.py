def is_palindrome(string: str) -> bool:
    """Test if given string is a palindrome"""
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    reverse_string = string[::-1]
    i = 0
    while i < len(string) and string[i] == reverse_string[i]:
        i += 1
    return string + reverse_string[i:]