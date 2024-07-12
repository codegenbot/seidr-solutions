```
def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string
    new_string = ""
    while not is_palindrome(new_string + string + new_string):
        new_string += string[0]
        if len(new_string) * 2 >= len(string):
            break
    return new_string + string + new_string