Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    prefix = string.lower()
    while not is_palindrome(prefix + prefix[::-1]):
        prefix += 'a'
    return prefix + prefix[::-1]