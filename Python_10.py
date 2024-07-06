```
def is_palindrome(string: str) -> bool:
    """ Test if given string is a palindrome """
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    s = string.lower()
    j = len(s) - 1
    for i in range(len(s) - 1, -1, -1):
        if s[i] != s[j]:
            return string + s[j+1::-1]
        j -= 1