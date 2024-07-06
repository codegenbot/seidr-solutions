```
def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    for char in string:
        string = char + string + char
    return string