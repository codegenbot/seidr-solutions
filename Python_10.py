```
def is_palindrome(string: str) -> bool:
    if string == string[::-1]:
        return True
    else:
        return False

def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string
    postfix = ""
    for char in string:
        postfix = char + postfix
    return string + postfix