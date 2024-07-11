def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    new_string = ""
    for char in string:
        new_string = char + new_string
        if new_string == new_string[::-1]:
            break
    return string + new_string