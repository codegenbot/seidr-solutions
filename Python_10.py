Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string.ispalindrome():
        return string + ''.join(reversed(string))
    for i in range(len(string), 0, -1):
        if string[:i].is_palindrome():
            return string[:i] + ''.join(reversed(string[i:]))
    return string