def is_palindrome(string: str) -> bool:
    """Test if given string is a palindrome"""
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    reverse_string = string[::-1]
    for i in range(len(string)):
        if string[: i + 1] == string[: i + 1][::-1]:
            return string + reverse_string[i:]
    return string + reverse_string