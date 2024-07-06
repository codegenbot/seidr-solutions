```
def make_palindrome(string: str) -> str:
    reverse = string[::-1]
    new_string = string + reverse
    if len(string) % 2 != 0:
        new_string = string[0] + new_string + string[0]
    return new_string