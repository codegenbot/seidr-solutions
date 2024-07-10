import re


def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    return string + "".join(reversed(string)) + string