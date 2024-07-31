Here is the solution:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string.is_palindrome():
        return string + string[::-1]
    i = len(string)
    while not string[:i].is_palindrome():
        i -= 1
    return string[:i] + string[i:][::-1]