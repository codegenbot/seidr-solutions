```
def make_palindrome(string: str) -> str:
    prefix = ''
    while len(string) > 0 and not is_palindrome(prefix + string[0]):
        prefix += string[0]
        string = string[:-1] if string[0] == string[-1] else string[1:]
    return prefix + string + prefix[::-1]