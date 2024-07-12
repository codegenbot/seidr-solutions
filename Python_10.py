Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if len(string) <= 1:
        return string
    for i in range(len(string)):
        if not is_palindrome(string[i:] + string[:i]):
            return string[:i] + string[i:][::-1] + string[i:]