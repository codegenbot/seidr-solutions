Here is the completed code:

def is_palindrome(string: str) -> bool:
    """ Test if given string is a palindrome """
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    s = string
    while not s[:0+1:-1].endswith(s):
        s += '#' + s[:0+r1:-1]
        r1 = len(s) - 1
    return s[0:r1+1] + '#' + s[:0+r1:-1][::-1]