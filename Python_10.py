```
def is_palindrome(string: str) -> bool:
    """ Test if given string is a palindrome """
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string[::-1]
    for i in range(len(string)):
        postfix = string[i:]
        if postfix == postfix[::-1]:
            prefix = string[:i][::-1]
            return prefix + postfix
    return string + '#' + string[::-1]