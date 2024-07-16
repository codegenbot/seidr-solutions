def is_palindrome(string: str) -> bool:
    """Test if given string is a palindrome"""
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if string.islower():
        for i in range(len(string), -1, -1):
            if string[:i] + string[i:][::-1] == string + string[i:][::-1]:
                return string + string[i:][::-1]
    else:
        for i in range(len(string), -1, -1):
            if (
                string[:i].lower() + string[i:][::-1].lower()
                == string.lower() + string[i:][::-1].lower()
            ):
                return string.lower() + string[i:][::-1].lower()