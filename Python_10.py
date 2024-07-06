Here is the completed code:

def is_palindrome(string: str) -> bool:
    """ Test if given string is a palindrome """
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    prefix = string
    while not is_palindrome(prefix):
        prefix += 'a'
    return string + prefix[::-1]