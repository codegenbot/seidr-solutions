def is_palindrome(string: str) -> bool:
    """Test if given string is a palindrome"""
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if string.islower():
        i = len(string)
        while not is_palindrome(string[:i]):
            i -= 1
        return string + string[:i][::-1]
    else:
        lower_string = string.lower()
        i = len(lower_string)
        while not is_palindrome(lower_string[:i]):
            i -= 1
        return string[0:i].upper() + lower_string[:i][::-1] + string[i:].lower()