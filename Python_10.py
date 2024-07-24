```
def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    left = ""
    for char in string:
        string = string[1:] + char
        if string == string[::-1]:
            return string
    right = ""
    for char in string:
        right = char + right
        if right == right[::-1]:
            return right
    return left + right[::-1]