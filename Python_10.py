```
def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    else:
        return string + "".join([string[::-1][:1], string, string[::-1][1:]])