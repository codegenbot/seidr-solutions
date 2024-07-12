```
def is_palindrome(string: str) -> bool:
    """ Test if given string is a palindrome """
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    reverse = string[::-1]
    for i in range(len(string)):
        if string[i:] + reverse[i:] == (string + reverse)[::-1]:
            return string + reverse
    return string + reverse