```
def make_palindrome(string: str) -> str:
    return "".join([char + char for char in string] + [char for char in string[::-1]])