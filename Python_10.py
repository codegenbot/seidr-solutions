```
def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string.ispalindrome():
        return string + string[::-1]
    i = 0
    while i < len(string):
        if string[i:].is_palindrome():
            return string + string[::-1][len(string[i:]):]
        i += 1