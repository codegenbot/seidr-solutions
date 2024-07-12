Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string.ispalindrome():
        return string + string[::-1]
    for i in range(len(string)):
        if is_palindrome(string[i:]):
            return string[:i] + string[i:][::-1] + string[i:]