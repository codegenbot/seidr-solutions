```
def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string
    else:
        return "".join(c*2 for c in string)