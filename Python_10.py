Here is the completed code:

def is_palindrome(string: str) -> bool:
    """ Test if given string is a palindrome """
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string.ispalindrome():
        return string + string[::-1]
    for i in range(len(string), 0, -1):
        if string[:i].ispalindrome() and not string[i:].ispalindrome():
            return string[:i] + string[i:][::-1]
    return string + string[::-1]