Here is the completed code:

def is_palindrome(string: str) -> bool:
    """ Test if given string is a palindrome """
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    for i in range(len(string)):
        postfix = string[i:]
        if postfix == postfix[::-1]:
            prefix = string[:i]
            return prefix + postfix[::-1]