```
def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    new_string = string + string[::-1]
    return new_string