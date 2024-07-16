def is_palindrome(string: str) -> bool:
    """Test if given string is a palindrome"""
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    reverse_string = string[::-1]
    for i in range(len(string)):
        if (
            string[i:] + reverse_string[i:]
            == string + reverse_string[:i] + reverse_string[i:]
        ):
            return string + reverse_string[:i] + reverse_string[i:]
    return string + reverse_string