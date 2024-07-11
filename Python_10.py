def is_palindrome(string: str) -> bool:
    """Test if given string is a palindrome"""
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if string.islower():
        for i in range(len(string), 0, -1):
            if string[:i] == string[:i][::-1]:
                return string + string[:i][::-1]
    else:
        for i in range(len(string), 0, -1):
            if "".join(reversed(string[:i].lower())) == "".join(
                reverse(string[:i].lower())
            ):
                return string + "".join(reversed(string[:i].lower()))