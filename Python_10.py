```
def is_palindrome(string: str) -> bool:
    """ Test if given string is a palindrome """
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    prefix = string.lower()
    postfix = prefix[::-1]
    i = 0
    while i < len(prefix) and prefix[i] == postfix[i]:
        i += 1
    return string + postfix[i:].lower()