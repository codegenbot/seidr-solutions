```
def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string
    postfix = ""
    for char in string:
        postfix = char + postfix
    if string != string[::-1]:
        return string + postfix
    else:
        return string