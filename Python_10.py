def is_palindrome(string: str) -> bool:
    """Test if given string is a palindrome"""
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    reversed_string = string[::-1]
    for i in range(len(string)):
        if string[i:] == string[i:][::-1]:
            return string + reversed_string[len(string) - i :]
    return string + reversed_string