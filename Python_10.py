```
def is_palindrome(string: str) -> bool:
    """ Test if given string is a palindrome """
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    rev = string[::-1]
    for i in range(len(string)):
        if string[i:] + rev[i:] == rev:
            return string + rev
    return string + rev