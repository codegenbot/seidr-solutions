```
def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if len(string) <= 1:
        return string
    prefix = ''
    while len(string) > 0 and not is_palindrome(prefix + string[0]):
        prefix += string[0]
        string = string[1:]
    return string[0] + string + string[0] + prefix[::-1]