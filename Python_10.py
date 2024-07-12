def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if not string:
        return ""

    if is_palindrome(string):
        return string + string

    for char in string:
        new_string = char + string[::-1] + char
        if is_palindrome(new_string):
            return new_string
    return string + string[::-1]