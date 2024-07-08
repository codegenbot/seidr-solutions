```
def make_palindrome(string: str) -> str:
    if len(string) == 0:
        return ""
    prefix = ""
    while not is_palindrome(prefix + string[0] + string[-1]):
        if len(string) <= 3 or is_palindrome(string):
            return string
        prefix += string[0]
        string = string[1:-1]
    return prefix + string[0] + string[-1] + prefix[::-1]

def is_palindrome(s):
    return s == s[::-1]