```
def make_palindrome(string: str) -> str:
    return "{}{}{}".format(string, string[::-1], string)