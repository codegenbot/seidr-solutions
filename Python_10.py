```
def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string
    for char in string:
        if string[0] == char and string[-1] == char:
            return string + char + char
    if string[0] == string[-1]:
        return string + string[0]
    return string + string[0] + string[0]