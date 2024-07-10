def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if not string:
        return ""
    else:
        if is_palindrome(string):
            return string + string
        else:
            return string + string[::-1]