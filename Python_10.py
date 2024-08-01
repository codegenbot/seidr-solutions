import re


def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if string.islower():
        for i in range(len(string), 0, -1):
            if string[:i] == string[:i][::-1]:
                return string + string[:i][::-1]
    else:
        for i in range(len(string), 0, -1):
            if (
                "".join(reversed(string[:i].lower()))
                == "".join(reversed(string[:i].lower()))[::-1]
            ):
                return (
                    string.capitalize()
                    + "".join(reversed(string[:i].lower()))[::-1].upper()
                )
    return string + string[::-1]