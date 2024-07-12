```
def is_palindrome(string: str) -> bool:
    """ Test if given string is a palindrome """
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    i = len(string) - 1
    while i >= 0 and string[i] == string[0]:
        i -= 1
    prefix = string[:i+1]
    suffix = string[i:][::-1]
    return prefix + suffix