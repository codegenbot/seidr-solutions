Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string.ispalindrome():
        return string + string[::-1]
    i = len(string) - 1
    while i >= 0 and not string[:i+1].is_palindrome():
        i -= 1
    return string[:i+1] + string[i+1:][::-1]