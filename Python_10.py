```
def is_palindrome(string: str) -> bool:
    """ Test if given string is a palindrome """
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    prefix = string
    postfix = ''
    while len(string) > len(postfix) and not is_palindrome(prefix + postfix):
        prefix = prefix[:-1]
    return prefix + prefix[::-1] + postfix